#include <stdio.h>


void ft_putchar(char c){
printf("%c ",c);
}

void print_alphabet(char a){
    int i=97;
    char c;

    while(i<123){
        c = i;
        ft_putchar(c);
       /* ft_putchar(' '); */
        i++;
    }
}
int main(void){
    char a;
    print_alphabet(a);
    return 0;
}