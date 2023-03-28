#include <stdio.h>
int ft_scan( int a){
    if(scanf("%d",&a) != 1){
        printf("n/a\n");
        return 0;
    }
    return a;
}

int fibo_rec(int a){
    if(a == 1 || a == 2){
        return 1;
    }
    return fibo_rec(a-2)+fibo_rec(a-1);
}

int main(void){
    int a = 0;
    a = ft_scan(a);
    
    if (a !=0){
     int res = fibo_rec(a);
     printf("%d",res);
    }

   

}