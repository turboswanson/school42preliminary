#include <stdio.h>
void f_scan( int *arr,int n){
    int x=1;

    for(int i=0;i<n;i++){
        arr[i]=x;
        x++;
    }
}

void f_print(int *arr,int n){
    for(int i=0;i<n;i++){
        printf("%*d ",3,arr[i]);
    }
}
int main(void){
    int n=5;
    int arr[n];
    f_scan(arr,n);
    f_print(arr,n);
    
    return 0;
}