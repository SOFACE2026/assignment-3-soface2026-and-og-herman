// #define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include <assert.h>
#include "print_logger.cpp"
#include "int_calculator.cpp"


/*
Jeg havde problemer med at køre testene. Jeg tror det handlede om at testene ikke kunne finde de relevante filer
Jeg har derfor, udfra de opgivne tests, skrevet de samme test, men med udgangspunkt i en mainfunktion.
*/


int main(){
    PrintLogger logger;
    IntCalculator calc(&logger);

    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            assert(calc.sum(i,j) == i+j);
        }
    }

    for (int i=0; i<10; i++){
        for (int j=0; j<10; j++){
            assert(calc.multiply(i,j) == i*j);
        }
    }

    std::cout << "Alle tests kører uden fejl";
    return 0;
}
