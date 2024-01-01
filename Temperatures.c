#include <stdio.h>
#include <stdlib.h>


int* dailyTemperatures(int* temperatures, int N) {
    int* result = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        result[i] = 0;

        for (int j = i + 1; j < N; j++) {
            if (temperatures[j] > temperatures[i]) {
                result[i] = j - i;
                break;
            }
        }
    }

    return result;
}

int main() {
    int N;

    
    scanf("%d", &N);

  
    int* temperatures = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &temperatures[i]);
    }

    
    int* result = dailyTemperatures(temperatures, N);


    for (int i = 0; i < N; i++) {
        printf("%d ", result[i]);
    }
    
    free(temperatures);
    free(result);

    return 0;
}
