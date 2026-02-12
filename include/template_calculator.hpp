#pragma once

#include <sstream>
#include "logger.hpp"

template <typename T>
class TemplateCalculator
{
public:
    explicit TemplateCalculator(Logger *logger) : logger(logger)
    {
    }

    // Implement this:
    T sum(T a, T b)
    {
        T sum = a+b;
        logger->log("taking the sum of " + std::to_string(a) + " and " + std::to_string(b) + 
                " which is " + std::to_string(sum));
        return sum;
    }

    // Implement this:
    T multiply(T a, T b)
    {
        T prod = a*b;
        logger->log("taking the prod of " + std::to_string(a) + " and " + std::to_string(b) + 
            " which is " + std::to_string(prod));
        return prod;
    }

private:
    Logger *logger;
};