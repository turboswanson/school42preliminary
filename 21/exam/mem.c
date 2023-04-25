#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr = malloc(1*sizeof(int));

    int n = 0;
    while(1){
        scanf("%d",&arr[n]);
        if(arr[n] == -1){
            break;
        }
        n++;
        arr = realloc(arr,(n+1)*sizeof(int));
    }

    for(int i = 0; i < n ; i++){
        for(int k = i + 1; k < n; k++){
            if(arr[i] == arr[k]){
                for(int j = k; j < n - 1; j++){
                    arr[j]=arr[j+1];
                }
                n--;
                k--;
            }
        }
    }

    for(int i = 0; i < n-1;i++){
        printf("%d ",*(arr+i));
    }
    printf("%d",*(arr+n-1));

    free(arr);

    return 0;

}