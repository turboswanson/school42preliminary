#include <stdio.h>
#define N 10

void input (int *arr,int *n,int *flag);
void output(int *arr,int n);
void f_max(int *arr,int n,int *max);
void f_min(int *arr,int n,int *min);
void f_average(int *arr,int n,double *average);
void f_disp(int *arr,int n,double *disp,double average);

int main(){
    int arr[N];
    int n;
    int flag = 0;

    input(arr,&n,&flag);    
    
    if(flag){
        printf("n/a");

        return 0;
    }

    int max;
    f_max(arr,n,&max);

    int min;
    f_min(arr,n,&min);

    double average;
    f_average(arr,n,&average);

    double disp;
    f_disp(arr,n,&disp,average);

    output(arr,n);

    printf("\n");

    printf("%d %d %.6lf %.6lf",max,min,average,disp);



    return 0 ;
}

void input (int *arr,int *n,int *flag){
    int a;

    if(scanf("%d.%d",n,&a) != 1 || *n > N || *n <= 0){
        *flag = 1;
    }

    for(int *p = arr;p-arr < *n;p++){
        if(scanf("%d.%d",p,&a) != 1) {
            *flag = 1;
        }
    }

}

void output(int *arr,int n){
    for(int i = 0; i < n - 1;i++){
        printf("%d ",*(arr+i));
    }
    printf("%d",*(arr+n-1));
}

void f_max(int *arr, int n,int *max){
    *max = *arr;

    for(int i = 0;i < n;i++){
        if( *(arr+i) > *max){
            *max = *(arr+i);
        }
    }
}

void f_min(int *arr, int n,int *min){
    *min = *arr;

    for(int i = 0;i < n;i++){
        if( *(arr+i) < *min){
            *min = *(arr+i);
        }
    }
}

void f_average(int *arr,int n,double *average){
    double a = 0;
    for(int i = 0;i < n;i++){
        a = a + *(arr+i);
    }
        
    *average = a/n;
}

void f_disp(int *arr,int n,double *disp,double average){
     double a = 0;
     
    for(int i = 0;i < n;i++){
        a += (*(arr+i)-average)*(*(arr+i)-average);
    }
    *disp = a/n;
}

