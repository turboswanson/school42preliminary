#include <stdio.h>
int ft_strlen(char *str){
    int i=0;
    for(i;str[i];i++);
    return i;
}

void ft_strnum(char * str, int num, int * res){
    for(int i=0;str[i];i++){
        if(str[i]<48||str[i]>57){
            * res = 0;
        }
    }
}
int main(void){
    int n=10;
    char str[n];
    int res = 1;
    gets(str);
    int len = ft_strlen(&str);
    ft_strnum(&str,len,&res);
    printf("%d",res);
    return 0;
}