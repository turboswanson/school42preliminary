#include <stdio.h>
#define NMAX 10

int input(int *arr, int *n);
int sum(int *arr, int n);
int count(int *arr, int n, int x);
void output(int *arr, int n, int length);

int main() {
  int n = 0;
  int arr[NMAX];

  if (input(arr, &n)) {
    printf("n/a");
    return 0;
  }

  if (sum(arr, n)) {
    int length = count(arr, n, sum(arr, n));
    output(arr, n, length);
  }

  else {
    printf("n/a");
    return 0;
  }
}

int input(int *arr, int *n) {
  int flag = 0;
  if (scanf("%d", n) != 1) {
    flag = 1;
  }

  for (int i = 0; i < *n; i++) {
    if (scanf("%d", arr + i) != 1) {
      flag = 1;
    }
  }

  return flag;
}

int sum(int *arr, int n) {
  int a = 0;
  for (int i = 0; i < n; i++) {
    if (*(arr + i) % 2 == 0) {
      a += *(arr + i);
    }
  }

  return a;
}

int count(int *arr, int n, int x) {
  int z = 0;

  for (int i = 0; i < n; i++) {
    if (*(arr + i) != 0) {
      if (x % *(arr + i) == 0) {
        z++;
      }
    }
  }

  return z;
}

void output(int *arr, int n, int length) {
  int res[length];

  int k = 0;

  for (int i = 0; i < n; i++) {
    if (*(arr + i) != 0) {
      if (sum(arr, n) % *(arr + i) == 0) {
        res[k] = *(arr + i);
        k++;
      }
    }
  }
  printf("%d\n", sum(arr, n));

  for (int i = 0; i < length - 1; i++) {
    printf("%d ", res[i]);
  }
  printf("%d", res[length - 1]);
}
