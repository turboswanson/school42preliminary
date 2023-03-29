#include <stdio.h>
#include <stdlib.h>

void f_scan( int arr[],int n){
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        }
}

void f_print(int arr[],int n){
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

void f_sort(int arr[],int n){
    int tmp=0;

    for(int i=0;i<n;i++){
        for(int k=i+1;k<n;k++){
            if(arr[k]<arr[i]){
                tmp = arr[i];
                arr[i]=arr[k];
                arr[k]=tmp;
            }
        }
    }
}

int main(void){
    int n = 5;
    int * arr = malloc(n*sizeof(int));
    f_scan(arr,n);
    f_sort(arr,n);
    f_print(arr,n);
    
   
    free(arr);

    return 0;
}