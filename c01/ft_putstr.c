#include <stdio.h>
char ft_putstr(char *str){
    int i=0;
    while(str[i]){
        putchar(str[i]);
        i++;
    }
}
int main(void){
    char str[10];
    gets(str);
    ft_putstr(&str);
    return 0;
}
