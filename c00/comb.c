#include <stdio.h>
void ft_print_comb(int a){
    for(int i=0;i<=9;i++){
        for(int k=0;k<=9;k++){
            for(int c=0;c<=9;c++){
                printf("%d%d%d ,",i,k,c); 
            }
        }
    }
}
int main(void){
    int a=1;
    ft_print_comb(a);
    return 0;
}