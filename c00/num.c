#include <stdio.h>
void ft_printchar(char *num){
    putchar(*num);
}
void ft_print_numbers(void){
    char num = '0';
    while(num <= '9'){
        ft_printchar(&num);
        num++;
    }
}
int main(void){
    ft_print_numbers();
    return 0;
}