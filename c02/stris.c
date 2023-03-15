#include <stdio.h>
int ft_strlen(char *str){
    int i=0;
    for(i;str[i];i++);
    return i;
}
int ft_stris(char * str,int num,int * res){
    
    for(int i=0;i<num;i++){
        if(str[0]){
        if(str[i]<65||str[i]>90&&str[i]<97||str[i]>123){
            * res = 0;
        }
        }
        else{
            * res = 1;
        }
    }
    
}
int main(void){
    int n=10;
    int res = 1;
    int len = 0;
    char str[n];
    gets(str);
    len = ft_strlen(&str);
    ft_stris(&str, len,&res);
    printf("%d",res);
    return 0;

}