#include <stdio.h>
#include <strings.h>

void ft_strlen(char *str){
    int i=strlen(str);
    printf("%d",i);
}
int main(void){
    char str[100];
    scanf("%s",&str);
    ft_strlen(&str);
    return 0;

}