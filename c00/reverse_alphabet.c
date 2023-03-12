#include <stdio.h>


void ft_putchar(char c){
printf("%c ",c);
}

void print_alphabet(char a){
    int i=122;
    char c;

    while(i>97){
        c = i;
        ft_putchar(c);
       /* ft_putchar(' '); */
        i--;
    }
}
int main(void){
    char a;
    print_alphabet(a);
    return 0;


}