#include <stdio.h>
int ft_strlen(char * str){
    int i=0;
    while(str[i]){
        i++;
    }
    return i;
}
int main(void){
    char str[100];
    gets(str);
    int n = ft_strlen(&str);
    printf("%d",n);

    return 0;
}