#include <stdio.h>
#include <math.h>

#define N 30

void input(int *arr,int *n, int *flag);
int result(int *arr, int n);
double average (int *arr, int n);
double variance(int *arr, int n);

int main(){
   int arr[N];
   int n;
   int flag = 0;

   input(arr,&n,&flag);

   if(flag == 1){
    printf("n/a");

    return 0;
   }

   printf("%d",result(arr,n));     

   return 0;
}

void input(int *arr,int *n, int *flag){
    int a;

    if(scanf("%d.%d",n,&a) != 1 || *n > N || *n <= 0){
        *flag = 1;
    }

    for(int *p = arr; p-arr < *n;p++){
        if(scanf("%d.%d",p,&a) != 1){
            *flag = 1;
        }
    }
}

int result(int *arr, int n){
    int res = 0;
    for(int i = 0;i < n;i++){
        if (*(arr+i)%2 == 0 && *(arr+i) != 0){
            if((double)*(arr+i) >= average(arr,n) && (double)*(arr+i) <= ((average(arr,n)) + 3*sqrt(variance(arr,n)))){
                res = *(arr+i);
                
            }
        }
        
    }
    return res;
    // printf("%.6lf %.6lf",average(arr,n),variance(arr,n));
}

double average(int *arr, int n){
    double a = 0;
    for(int i = 0;i < n;i++){
        a += *(arr+i);
    }

    return a/n;
}

double variance(int *arr, int n){
    double a = 0;
    for(int i = 0;i < n;i++){
        a += (*(arr+i) - average(arr,n))*(*(arr+i) - average(arr,n));
    }

    return a/n;
}

// M = (1+2+3+4)/4;  D = ((arr[i....n]-M)*(arr[i......n]-M))/n   ; X = sqrt(D);  3 sigm num < M + 3*X


