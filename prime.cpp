#include "prime.h"
bool checkPrime(int N) {
    if (N <= 1) {
        return 0;
    }
    for (int i = N - 1; i > 1; --i) {
        if (N % i == 0) {
            return 0;
        }
    }
    return 1;
}