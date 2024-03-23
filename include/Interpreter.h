#ifndef INCLUDE_INCLUDE_INTERPRETER_H_
#define INCLUDE_INCLUDE_INTERPRETER_H_

#include "Expression.h"
#include "Token.h"
#include <cstddef>
#include <memory>
template <class... Ts>
struct overloaded : Ts... {
    using Ts::operator()...;
};

std::variant<double, std::string, bool, nullptr_t> interperet(Expr& expression)
{
    std::visit(overloaded {

               },
        expression);
}

#endif // INCLUDE_INCLUDE_INTERPRETER_H_
