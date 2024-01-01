#include <stdio.h>


int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}


int isStrongNumber(int num) {
    int originalNum = num;
    int sum = 0;

    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N; 
        scanf("%d", &N);

        if (N >= 1 && N <= 10000) {
            if (isStrongNumber(N)) {
                printf("Strong
");
            } else {
                printf("Not Strong
");
            }
        }
    }

    return 0;
}
