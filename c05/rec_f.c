#include <stdio.h>
int rec_fac(int n){
    if(n==1){
        return 1;
    }
    return n*rec_fac(n-1);
    
}
int main(void){
    int n=5;
    printf("%d",rec_fac(n));
    return 0;
}