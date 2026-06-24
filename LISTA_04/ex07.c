#include <stdio.h>

double media(const int v[], int n) {
    if (n <= 0) return 0.0;
    long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += v[i];
    }
    return (double)sum / n;
}

int main(void) {
    int arr[] = {2, 4, 6, 8, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Média: %.2f\n", media(arr, n));
    return 0;
}
