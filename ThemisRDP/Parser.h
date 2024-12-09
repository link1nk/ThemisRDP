#ifndef PARSER_H
#define PARSER_H

#include <string>

#include "AstNode.h"

class Parser
{
private:
	std::string m_string;

	/*
	* Main entry point
	*
	* Program
	*	: NumericLiteral
	*	;
	*/
	AstNode Program();

	/*
	* NumericLiteral
	*	: NUMBER
	*	;
	*/
	AstNode NumericLiteral();

public:
	AstNode parse(std::string string);  // Parses a string into an AST

	
};

#endif // PARSER_H