#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = (int*)malloc(100*sizeof(int));
    int n = 0;

    while(scanf("%d",arr+n) == 1 && *(arr+n) != -1){
    n++;
    }

    // for(int i = 0;i < n;i++){
    //     scanf("%d",&arr[i]);
    // }

    for(int i = 0;i < n;i++){
        for(int k = i+1;k < n;k++){
            if(*(arr+i) == *(arr+k)){
                for(int j = k;j < n -1;j++){
                    *(arr+j)=*(arr+j+1);
                }
                n--;
                k--;
            }
        }
    }

    for(int i = 0;i<n;i++){
        printf("%d",*(arr+i));
        if(i != n - 1){
            printf(" ");
        }
    }

    free(arr);
}