#include <stdio.h>
int isPretty(int num) {
    int lastDigit = num % 10;
    return (lastDigit == 2 || lastDigit == 3 || lastDigit == 9);
}

int countPrettyNumbers(int L, int R) {
    int count = 0;
    for (int i = L; i <= R; i++) {
        if (isPretty(i)) 
            count++;
    }
    return count;
}

int main() {
    int L, R, t;
    scanf("%d",&t);
    while(t-->0) {
    scanf("%d%d",&L,&R);
    int result = countPrettyNumbers(L, R);
    printf("%d
",result);
    }
    return 0;
}