#include <stdio.h>
#include <stdlib.h>

void f_scan(int **a,int n,int m){
    int x = 1;
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            a[i][k]=x;
            x++;
        }
    }
}

void f_print(int **a,int n,int m){
     for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            printf("%*d ",3,a[i][k]);
        }
        printf("\n");
    }
}

int main(void){
    int n=4;
    int m=5;

    int **a = (int **)malloc(n*sizeof(int*)+n*m*sizeof(int));
    int * start = (int*)((char*)a + n*sizeof(int*));

    for(int i=0;i<n;i++){
        a[i]=start +i*m;
    }

    if (a == NULL){
        printf("n/a\n");
        return 0;
    }

    

    f_scan(a,n,m);
    f_print(a,n,m);

     

    free(a);

    return 0;


    
}