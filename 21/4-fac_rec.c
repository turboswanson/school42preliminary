#include <stdio.h>
#include <stdlib.h>
int f_scan(int a){
    scanf("%d",&a);
    return a;
}

int f_fac(int a){
    if (1 == a){
        return 1;
    }
    return a*f_fac(a-1);
}

void f_print( int f){
    printf("%d",f);
}

int main(void){
    int a = malloc(sizeof(int));
    a = f_scan(a);
    int f = malloc(sizeof(int));
    f_print(f = f_fac(a));

    return 0;

}