#include <stdio.h>
#include <stdlib.h>

void f_scan(int *a,int n){
    int x = 1;
    for(int i=0;i<n;i++){
        a[i]=x;
        x++;
    }
}

void f_print(int *a,int n){
    for(int i=0;i<n;i++){
        printf("%*d ",3,a[i]);
    }

}

int main(void){
    int n=10;
    int * a = malloc(n*sizeof(int));

    f_scan(a,n); 
    f_print(a,n);

    free(a);

    return 0;
}