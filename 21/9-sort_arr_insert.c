#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n = 5;
    int * arr = calloc(n,sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=1;i<n;i++){
        int k=i;
        while(k>0 && arr[k-1]>arr[k]){
            int tmp;
            tmp=arr[k];
            arr[k]=arr[k-1];
            arr[k-1]=tmp;
            k--;
        }
    }

    for(int i=0;i<n;i++){
        printf("%d%c",arr[i],((i == n-1) ? '\n' : ' '));
    }

    return 0;

}