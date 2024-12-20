#include "Parser.h"

AstNode Parser::Program()
{
    return NumericLiteral();
}

AstNode Parser::NumericLiteral()
{
    return AstNode{ AstNodeType::NUMERIC_LITERAL, std::stoi(m_string) };
}

AstNode Parser::parse(std::string string)
{
    m_string = string;

    return Program();
}
