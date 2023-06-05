#include <iostream>
#include <limits>

#include "core/EquationDispatch.h"

 bool isDouble(const std::string& str)
 {
     bool result = true;
     try
     {
         // Convert string to double
         double d = stod(str);
     }
     catch (const std::invalid_argument& e)
     {
         // handle the exceptiop invalid_argument
         result = false;
     }
     catch (const std::out_of_range& e)
     {
         // handle the exceptiop out_of_range
         result = false;
     }
     return result;
 }

int main() {
    
    std::cout << std::endl;
    std::cout << "Hi! I can help you solve any quadratic equation. Just enter coefficients below." << std::endl;
    std::cout << "It will be work in a cycle. To stop press Ctrl + C combination." << std::endl << std::endl;

    while (true) {
        double A, B, C;
        std::string As, Bs, Cs;

        std::cout << "Enter the A coefficient: ";
        std::cin >> As;
        if (isDouble(As)) {
            A = std::stod(As);
        } else {
            std::cout << "Invalid double value!" << std::endl << std::endl;
            continue;
        }

        std::cout << "Enter the B coefficient: ";
        std::cin >> Bs;
        if (isDouble(Bs)) {
            B = std::stod(Bs);
        } else {
            std::cout << "Invalid double value!" << std::endl << std::endl;
            continue;
        }

        std::cout << "Enter the C coefficient: ";
        std::cin >> Cs;

        if (isDouble(Cs)) {
            C = std::stod(Cs);
        } else {
            std::cout << "Invalid double value!" << std::endl << std::endl;
            continue;
        }

        std::cout << std::endl;

        EquationDispatch dispatcher = *new EquationDispatch(A, B, C);
        dispatcher.solve().print();
    }
}
