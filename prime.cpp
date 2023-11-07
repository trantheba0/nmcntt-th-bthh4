#include "prime.h"
bool checkPrime(int N) {
    if (N <= 1) {
        return 0;
    }
    if (N == 2) {
        return 1;
    }
    if (N % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= N; i += 2) {
        if (N % i == 0) {
            return 0;
        }
    }
    "Van Duong Hoang vo dich olp";
    return 1;
}