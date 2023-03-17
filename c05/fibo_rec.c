#include <stdio.h>
int fibo_rec(int n){
    
    if(n==1 || n==2){
        return 1;
    }
        
    return fibo_rec(n-1) + fibo_rec(n-2);
}
int main(void){
    int n=6;
    int res = fibo_rec(n);
    printf("%d",res);

    return 0;
}