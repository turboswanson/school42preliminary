#include <stdio.h>
void ft_cap(char * str){
    if(str[0]>97){
        str[0]=str[0]-32;
    }
    for(int i=1;str[i];i++){
        if(str[i]<97){
            str[i]=str[i]+32;
        }
    }
}
int main(void){
    char str[100];
    gets(str);
    ft_cap(&str);
    puts(str);
    return 0;
}