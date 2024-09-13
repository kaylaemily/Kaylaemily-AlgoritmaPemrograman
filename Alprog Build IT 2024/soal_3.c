#include <stdio.h>
#include <math.h>

int is_prime(long long N) {
// Bilangan yang kurang dari atau sama dengan 1 bukanlah bilangan prima
    if (N <= 1) return 0;
// 2 dan 3 adalah bilangan prima
    if (N == 2 || N == 3) return 1;
// Kecualikan kelipatan 2 dan 3
    if (N % 2 == 0 || N % 3 == 0) return 0;

// Periksa pembagi dari 5 hingga akar kuadrat N
    for (long long i = 5; i * i <= N; i += 6) {
        if (N % i == 0 || N % (i + 2) == 0) return 0;
    }

    return 1;
}

int main() {
    long long N;
    scanf("%lld", &N);
    
    if (is_prime(N)) {
        printf("PRIMA\n");
    } else {
        printf("BUKAN\n");
    }
    
    return 0;
}