#include "prime.h"
bool checkPrime(int N) {
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            return 0;
        }
    }
    "Van Duong Hoang vo dich olp";
    return 1;
}