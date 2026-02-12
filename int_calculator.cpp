#include <sstream> // Hint to how you should build the message.

#include "int_calculator.hpp"

// Constructor Injection
IntCalculator::IntCalculator(Logger *logger) : logger(logger) {}

// Implement this:
int IntCalculator::sum(int a, int b)
{

    int sum = a+b;

    // lidt usikker på hvordan det skal gøres rigtigt da jeg ikke var der tirsdag, men antager at ideen er at vi skal kunne ændre
    // i metoden til logger-instansen uden problemer og have implementationen forblive det samme
    // så denne bruger bare logger-instansen til at køre log-funktionen med en præ-defineret streng

    /*
    Jeg er lidt usikker på hvordan vi skal gøre dette, men som jeg forstår det fra pdf'
    en fra timen (var der ikke). Skal jeg implementere så vi kan ændre i metoden log uden at ændre på sum eller mult-funktionen. 
    Dette gøres let ved at kalde log-funktionen i logger-instansen i intcalculater. 
    */

    logger->log("taking the sum of " + std::to_string(a) + " and " + std::to_string(b) + 
                " which is " + std::to_string(sum));

    return sum;
}

// Implement this:
int IntCalculator::multiply(int a, int b)
{
    int prod = a*b;
    // samme konsept som ovenfor
    logger->log("taking the prod of " + std::to_string(a) + " and " + std::to_string(b) + 
                " which is " + std::to_string(prod));
    
    return prod;
}