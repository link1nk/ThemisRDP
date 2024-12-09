#include "AstNode.h"

std::string AstNodeType::toString()
{
    switch (value) {
    case AstNodeType::NUMERIC_LITERAL: return "NUMERIC_LITERAL";
    case AstNodeType::PROGRAM: return "PROGRAM";
    default: return "Unknown";
    }
}
