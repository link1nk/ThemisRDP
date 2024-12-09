#include <iostream>
#include <string>
#include "Parser.h"
#include "Logger.h"

int main(void)
{
	Parser parser;

	std::string program = "42";

	AstNode ast = parser.parse(program);

	log_ast(ast);
}