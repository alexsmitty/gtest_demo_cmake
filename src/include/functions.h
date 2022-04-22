#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>

template<class T>
T sum(const T &first, const T &second)
{
    return first + second;
}

template<class T>
T subtract(const T &first, const T &second)
{
    return first - second;
}

std::string getHelloWorldString();

#endif // FUNCTIONS_H4
