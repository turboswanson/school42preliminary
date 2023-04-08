#include <stdio.h>
#define N 10
void input(int *arr, int *n, int *flag);
void squaring(int *arr, int n);
void output(int *arr, int n);

int main() {
    int arr[N];
    int flag = 0;
    int n;
    input(arr, &n, &flag);

    if (flag == 1) {
        printf("n/a");
        return 0;
    }

    squaring(arr, n);
    output(arr, n);
}

void input(int *arr, int *n, int *flag) {
    int a;
    if (scanf("%d.%d", n, &a) != 1 || *n <= 0 || *n > N) {
        *flag = 1;
    }

    for (int *p = arr; p - arr < *n; p++) {
        if (scanf("%d.%d", p, &a) != 1) {
            *flag = 1;
        }
    }
}

void squaring(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        *(arr + i) = *(arr + i) * *(arr + i);
    }
}

void output(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", *(arr + i));
    }
    printf("%d", *(arr + n - 1));
}