#include <stdio.h>
int ft_strlen(char *str_1){
    int i=0;
    for(i;str_1[i];i++);
    return i;
}
void ft_strcmp(char *str_1, char *str_2,int *res,int a,int b){
    if(a>=b){
        for(int i=0;i<a;i++){
            if(str_1[i]!=str_2[i]){
                * res = str_1[i]-str_2[i];
            }
    }
    }    
    else{
        for(int i=0;i<a;i++){
            if(str_2[i]!=str_1[i]){
                * res = str_1[i]-str_2[i];
            }
    }
    }
    
}
int main(void){
    char str_1[100];
    char str_2[100];
    int res = 0;
    gets(str_1);
    gets(str_2);
    int a = ft_strlen(&str_1);
    int b = ft_strlen(&str_2);
    
    ft_strcmp(&str_1,&str_2,&res,a,b);
    printf("%d",res);
    

    return 0;
}