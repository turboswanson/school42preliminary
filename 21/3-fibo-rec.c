#include <stdio.h>

int ft_scan(int a,char c);
int fibo_rec(int a);

int main(void){
    int a = 0;
    char c;
    a = ft_scan(a,c);
    
    if (a !=0){
     int res = fibo_rec(a);
     printf("%d",res);
    }

return 0;

}

int ft_scan(int a, char c){
    if(scanf("%d%c",&a,&c) != 2 || c != '\n' || a == 0){
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