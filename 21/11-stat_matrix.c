#include <stdio.h>

void f_scan( int *arr,int n,int m){

    int x=1;
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
        arr[i][k]=x;
        x++;
        }
    }
}

void f_print(int *arr,int n,int m){

    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
        printf("%*d ",3,arr[i][k]);
    }
        printf("\n");
    }
}

int main(void){
    int n=4,m=5;
    int arr[n][m];
    f_scan(arr,n,m);
    f_print(arr,n,m);
    
    return 0;
}