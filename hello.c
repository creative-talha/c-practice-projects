#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int isPrime(long long n) {
    if (n < 2) return 0;
    if (n % 2 == 0 && n != 2) return 0;
    for (long long i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    clock_t start, end;
    start = clock();

    long long limit = 5000000; // 🔹 change this number to increase/decrease workload
    long long count = 0;

    for (long long i = 2; i <= limit; i++) {
        if (isPrime(i)) {
            count++;
        }
    }

    end = clock();
    double time_taken = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Number of primes found up to %lld = %lld\n", limit, count);
    printf("Time taken = %.2f seconds\n", time_taken);

    return 0;
}
