#include <stdio.h>

// Функція для підрахунку кількості чисел із розрядами
unsigned long long countNumbers(int n) {
    if (n == 1)
        return 2; // 5 та 9

    unsigned long long dp[n + 1];
    dp[1] = 2; // 5 та 9
    dp[2] = 3; // 55, 59, 95

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n;
    printf("Введіть кількість розрядів (розрядність): ");
    scanf("%d", &n);

    unsigned long long result = countNumbers(n);
    printf("Кількість чисел із %d розрядів: %llu\n", n, result);

    return 0;
}

