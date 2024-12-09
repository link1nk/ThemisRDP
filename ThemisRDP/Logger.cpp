#include "Logger.h"
#include <iostream>

void log_ast(AstNode ast)
{
	std::cout << "{\n"
		<< "  \"type\": " << "\"" << ast.type << "\",\n"
		<< "  \"value\": " << ast.value << "\n}";
}
