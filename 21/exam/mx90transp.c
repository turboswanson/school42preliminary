#include <stdio.h>

int main(){
    int n = 0;
    int m = 0;

    scanf("%d%d",&n,&m);

    int x = 1;
    int a[n][m];

    for(int i = 0; i < n;i++){
        for(int k = 0;k < m;k++){
            a[i][k]=x;
            x++;
        }
    }
     for(int i = 0; i < n;i++){
        for(int k = 0;k < m;k++){
            printf("%d ",a[i][k]);
        }
        printf("\n");
    }

    printf("\n");

    // +90*
    printf("+90*\n");
    for(int i = 0; i < n;i++){
        for(int k = m-1;k >=0;k--){
            printf("%d ",a[k][i]);
        }
        printf("\n");
    }

    printf("\n");

    // - 90*
    printf("-90*\n");

    for(int i = n - 1; i >=0;i--){
        for(int k = 0;k < n;k++){
            printf("%d ",a[k][i]);
        }
        printf("\n");
    }
    //transp.

    printf("\n");

    printf("transp\n");

    for(int i = 0; i < n;i++){
        for(int k = 0;k < m;k++){
            printf("%d ",a[k][i]);
        }
        printf("\n");
    }

    return 0;

}