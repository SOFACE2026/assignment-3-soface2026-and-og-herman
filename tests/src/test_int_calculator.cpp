#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "C:\Users\herma\OneDrive\Skrivebord\afl3 rigtig\assignment-3-soface2026-and-og-herman\tests\include\catch.hpp"
#include "C:\Users\herma\OneDrive\Skrivebord\afl3 rigtig\assignment-3-soface2026-and-og-herman\include\int_calculator.hpp"
#include "C:\Users\herma\OneDrive\Skrivebord\afl3 rigtig\assignment-3-soface2026-and-og-herman\include\print_logger.hpp"
// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("IntCalculator")
{

    PrintLogger logger;
    IntCalculator calc(&logger);

    SECTION("sum")
    {
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                REQUIRE(calc.sum(i, j) == i + j);
            }
        }
    }

    SECTION("multiply")
    {

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                REQUIRE(calc.multiply(i, j) == i * j);
            }
        }
    }
}
