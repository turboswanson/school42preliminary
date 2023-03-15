#include <stdio.h>
void ft_case(char * str){
    for(int i=0;str[i];i++){
        str[i]=str[i]-32;
    }

}
int main(void){
    int n=10;
    char str[n];
    gets(str);
    ft_case(&str);
    puts(str);

    return 0;
}