#include <stdio.h>

int ft_strlen(char * str){
    int i=0;
    for(i;str[i];i++);
    return i;
}

void ft_strncmp(char *str_1, char *str_2,int * res, int num){
    int len_1 = ft_strlen(str_1);
    int len_2 = ft_strlen(str_2);
    if(len_1>=len_2){
        for(int i=0;i<num;i++){
            if(str_1[i]!=str_2[i]){
                * res = str_1[i]-str_2[i];
            }
        }
    }
    else{
        for(int i=0;i<num;i++){
            if(str_2[i]!=str_1[i]){
                * res = str_2[i]-str_1[i];
            }
        }
    }
}

int main(void){
    char str_1[100];
    char str_2[100];
    gets(str_1);
    gets(str_2);
    int num = 5;       
    int res = 0;
    ft_strncmp(&str_1,&str_2,&res,num);
    printf("%d",res);

    return 0;
}