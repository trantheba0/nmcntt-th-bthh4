#include <iostream>
#include "prime.h"
void printPrime(int N) {
    for (int i = 1; i <= N; ++i) {
        if (checkPrime(i)) {
            std::cout << i << ' ';
        }
    }
}
int main() {
    int N;
    std::cout << "Nhap vao N = ";
    printPrime(N);
}