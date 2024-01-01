#include <stdio.h>

int main() {
    int T; 
    scanf("%d", &T);

    for (int t = 0; t < T; t++) {
        int N, A, B, K; 
        scanf("%d %d %d %d", &N, &A, &B, &K);

        int problems_solved_by_franklin = N / A; // Problems divisible by A
        int problems_solved_by_venkat = N / B;   // Problems divisible by B
        int common_problems = N / (A * B);        // Problems divisible by both A and B

        int total_solved = problems_solved_by_franklin + problems_solved_by_venkat - (2 * common_problems);

        if (total_solved >= K) {
            printf("Win
");
        } else {
            printf("Lose
");
        }
    }

    return 0;
}
