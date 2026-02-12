#include "template_calculator.hpp"
#include "dummy_logger.hpp"
#include "print_logger.cpp"
#include "assert.h"

/*
Jeg havde problemer med at køre testene. Jeg tror det handlede om at testene ikke kunne finde de relevante filer
Jeg har derfor, udfra de opgivne tests, skrevet de samme test, men med udgangspunkt i en mainfunktion.
*/


int main(){
    PrintLogger logger;

        // test for integers og plus
        TemplateCalculator<int> calc(&logger);
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                    assert(calc.sum(i, j) == i + j);
                }
        }
        //test for integers og gange
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                    assert(calc.multiply(i, j) == i * j);
            }
        }
        // test for floats og plus
        TemplateCalculator<float> calc2(&logger);
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                assert(calc2.sum(static_cast<float>(i), static_cast<float>(j)) == i + j);
            }
        }
        // test for floats og gange
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++){
                assert(calc2.multiply(static_cast<float>(i), static_cast<float>(j)) == i * j);
            }
        }

        std::cout << "Alle test kører uden fejl"; 
        
    
}
