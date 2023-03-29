#include <stdio.h>

int main(void){
    int arr[10];
    int n=10;

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for (int i = 0; i < n; i++){
        printf("%d%c",arr[i],(i==n-1) ? '\n' : ' ');
    }
    

    return 0;
}