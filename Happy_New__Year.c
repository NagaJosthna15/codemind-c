#include <stdio.h>

int main() {
    int h, m;

    scanf("%d %d", &h, &m);

    int minutesBeforeNewYear = (24 - h - 1) * 60 + (60 - m);

    printf("%d
", minutesBeforeNewYear);

    return 0;
}
