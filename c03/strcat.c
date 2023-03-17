#include <stdio.h>
int ft_strlen(char * str){
    int i=0;
    for(i;str[i];i++);
    return i;
}

void ft_strcat(char * str_1, char *str_2,int num){
    for(int i=num,k=0;str_1[k];i++,k++){
        str_1[i]=str_2[k];

    }

    puts(str_1);
}
int main(void){
    char str_1[100];
    char str_2[100];
    gets(str_1);
    gets(str_2);
    int len = ft_strlen(&str_1);
    ft_strcat(&str_1,&str_2,len);
}