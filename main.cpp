#include <iostream>

#include "core/EquationDispatch.h"

int main() {
    std::cout << std::endl;
    std::cout << "Hi! I can help you solve any quadratic equation. Just enter coefficients below." << std::endl;
    std::cout << "It will be work in a cycle. To stop press Ctrl + C combination." << std::endl << std::endl;

    while (true) {
        double A = 0, B = 0, C = 0;

        std::cout << "Enter the A coefficient: ";
        std::cin >> A;

        std::cout << "Enter the B coefficient: ";
        std::cin >> B;

        std::cout << "Enter the C coefficient: ";
        std::cin >> C;
        std::cout << std::endl;

        EquationDispatch dispatcher = *new EquationDispatch(A, B, C);
        dispatcher.solve().print();
    }
}
