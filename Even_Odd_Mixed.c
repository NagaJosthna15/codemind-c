#include <stdio.h>

int lastDigit(int n) {
    return n % 10;
}

int isEven(int n) {
    int digit = lastDigit(n);
    do {
        if (digit % 2 != 0) {
            return 0; // Not even
        }
        n /= 10;
        digit = lastDigit(n);
    } while (n != 0);
    
    return 1; // All digits are even
}

int isOdd(int n) {
    int digit = lastDigit(n);
    do {
        if (digit % 2 == 0) {
            return 0; // Not odd
        }
        n /= 10;
        digit = lastDigit(n);
    } while (n != 0);

    return 1; // All digits are odd
}

int main() {
    int n;
    scanf("%d", &n);

    if (isEven(n)) {
        printf("Even
");
    } else if (isOdd(n)) {
        printf("Odd
");
    } else {
        printf("Mixed
");
    }

    return 0;
}
