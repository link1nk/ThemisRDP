#ifndef ASTNODE_H
#define ASTNODE_H

#include <string>

class AstNodeType
{
public:
	enum Value : uint8_t
	{
		NUMERIC_LITERAL, PROGRAM
	};

	AstNodeType(Value vAstNodeType) :
		value(vAstNodeType)
	{}

	operator Value() const { return value; }
	explicit operator bool() const = delete;
	bool operator==(AstNodeType t) const { return value == t.value; }
	bool operator!=(AstNodeType t) const { return value != t.value; }

	std::string toString();

private:
	Value value;
};

class AstNode
{
	friend void log_ast(AstNode ast);

private:
	AstNodeType type;
	int value;

public:
	AstNode(AstNodeType type, int value) :
		type(type), value(value)
	{}
};

#endif // ASTNODE_H 