#include <sstream> // Hint to how you should build the message.

#include "int_calculator.hpp"

// Constructor Injection
IntCalculator::IntCalculator(Logger *logger) : logger(logger) {}

// Implement this:
int IntCalculator::sum(int a, int b)
{

    int sum = a+b;

    // lidt usikker på hvordan det skal gøres rigtigt, men antager at ideen er at vi skal kunne ændre
    // i metoden til logger-instansen uden problemer.
    logger->log("taking the sum of " + std::to_string(a) + " and " + std::to_string(b) + 
                " which is " + std::to_string(sum));

    return sum;
}

// Implement this:
int IntCalculator::multiply(int a, int b)
{
    int prod = a*b;
    
    logger->log("taking the prod of " + std::to_string(a) + " and " + std::to_string(b) + 
                " which is " + std::to_string(prod));
    
    return prod;
}