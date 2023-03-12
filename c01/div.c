#include <stdio.h>
int ft_div(int c){
int a=0,b=0;
scanf("%d %d",&a,&b);
c=a/b;
return c;
}
int ft_mod(int d){
int a=0,b=0;
scanf("%d %d",&a,&b);
d=a%b;
return d;
}


int main(void){
    int c = 10;
    int d = 20;
    int *p_div = &c;
    int *p_mod = &d;
    c = ft_div(c);
    printf("%d\n",*p_div);
    d = ft_mod(d);
    printf("%d\n",*p_mod);
    
    return 0;
}