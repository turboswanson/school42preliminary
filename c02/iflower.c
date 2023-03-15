#include <stdio.h>
void ft_iflower(char * str, int * res){
    for(int i=0;str[i];i++){
        if(str[i]<97||str[i]>122){
            * res =0;
        }
    }
}
int main (void){
    int num=10;
    int res=1;
    char str[num];
    gets(str);
    ft_iflower(&str,&res);
    printf("%d",res);

    return 0;
}    

