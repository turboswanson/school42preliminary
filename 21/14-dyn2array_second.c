#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n=4,m=5;
    int * a = (int *)malloc(n*m*sizeof(int));

    if (a == NULL){
        printf("n/a\n");
        return 0;
    }

    for(int i = 0;i < n;i++){
        for(int k = 0;k < m;k++){
            scanf("%d", (a + i*m + k));
        }
    }

    for(int i = 0;i < n;i++){
        for(int k = 0;k < m;k++){
            printf("%d ", *(a + i*m + k));
        }
        printf("\n");
    }

    free(a);

  
    return 0;
}