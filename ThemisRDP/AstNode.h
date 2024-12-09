#ifndef ASTNODE_H
#define ASTNODE_H

#include <string>

class AstNode
{
	friend void log_ast(AstNode ast);

private:
	std::string type;
	int value;

public:
	AstNode(std::string type, int value) :
		type(type), value(value)
	{}
};

#endif // ASTNODE_H 