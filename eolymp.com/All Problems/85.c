#include <stdio.h>
// Comment

int main() {
    int n,ai,aj;
    scanf("%d %d %d", &n, &ai, &aj);
    int k = 1, t = 0;
    int a[n][n];
    
    do {
        for (int j = t; j < n - t; j++) {
            a[t][j] = k++;
        }
        for (int i = t + 1; i < n - t; i++) {
            a[i][n - 1 - t] = k++;
        }
        for (int j = n - 2 - t; j >= t; j--) {
            a[n - 1 - t][j] = k++;
        }
        for (int i = n - 2 - t; i > t; i--) {
            a[i][t] = k++;
        }
        t++;
    } while (k <= n * n);

    printf("%d ", a[ai-1][aj-1]);
        

    return 0;
}
