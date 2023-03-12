#include <stdio.h>
char ft_putchar(char c){
    putchar(c);
}
int main(void){
    int num=0;
    scanf("%d",&num);
    if(num<0){
        ft_putchar('N');
    }
    else{
        ft_putchar('P');
    }

    return 0;
}