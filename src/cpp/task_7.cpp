/*
 * Author: Axmad Xurshetov
 * Date: 23.01.2024
 * Name: task7.cpp
 */

#include <iostream>

int eulerTotientFunction(int a, int b) {
    return (a - 1) * (b - 1);
}

int main() {
    int a, b;

    std::cout << "Enter the first prime number (a): ";
    std::cin >> a;

    std::cout << "Enter the second prime number (b): ";
    std::cin >> b;

    int result = eulerTotientFunction(a, b);
    std::cout << "Euler's totient function of n is: " << result << std::endl;

    return 0;
}
