/*
 * Author: Axmad Xurshetov
 * Date: 23.01.2024
 * Name: task8.cpp
 */

#include <algorithm>
#include <numeric>

int gcd(int a, int b) {
    return std::gcd(a, b);
}

int modInverse(int e, int phi) {
    e %= phi;
    for (int x = 1; x < phi; x++) {
        if ((e * x) % phi == 1)
            return x;
    }
    return 1;
}

std::pair<int, int> generateED(int p, int q) {
    int n = p * q;
    int phi = (p - 1) * (q - 1);
    int e;
    for (e = 2; e < phi; e++) {
        if (gcd(e, phi) == 1) {
            break;
        }
    }
    int d = modInverse(e, phi);

    return {e, d};
}