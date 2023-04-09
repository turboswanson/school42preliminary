#include <stdio.h>
#define N 10

void input(int *arr, int *flag);
void sort (int *arr);
void output(int *arr);

int main(){
    int arr[N];
    int flag = 0;
    input(arr, &flag);

    if(flag == 1){
        printf("n/a");

        return 0;
    }

    sort(arr);
    output(arr);

    return 0;
}

void input(int *arr, int *flag){
    int a;
    for(int i=0;i<N;i++){
        if(scanf("%d.%d",(arr+i),&a) != 1){
            *flag = 1;
        }
    }
}
void sort (int *arr){
    int temp;
    for(int i = 0;i<N;i++){
        for(int k = i+1;k < N;k++){
            if(*(arr+k) < *(arr+i)){
                temp = *(arr+i);
                *(arr+i) = *(arr+k);
                *(arr+k) = temp;
            }
        }
    }
}

void output(int *arr){
    for(int i = 0;i < N-1;i++){
        printf("%d ",*(arr+i));
    }
    printf("%d",*(arr+N-1));
}
