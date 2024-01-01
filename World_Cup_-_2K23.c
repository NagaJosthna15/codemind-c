#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int totalMatches = (N * (N - 1)) / 2;
    printf("%d
", totalMatches);
    return 0;
}
