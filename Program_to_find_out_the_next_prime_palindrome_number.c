#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    return original == reversed;
}

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int findNextPrimePalindrome(int N) {
    int nextNumber = N + 1;
    while (1) {
        if (isPalindrome(nextNumber) && isPrime(nextNumber)) {
            return nextNumber;
        }

        nextNumber++;
    }
}

int main() {
    int N;scanf("%d", &N);
    if (N >= 10 && N <= 10000) {
        int result = findNextPrimePalindrome(N);
        printf("%d
",result);
    }

    return 0;
}
