#include <stdio.h>

int main(void){
    for(int i=0;i<=9;i++){
        for(int k=0;k<=9;k++){
            if(i==9 && k==9){
                printf("%d%d",i,k);
                return 0;
            }
            printf("%d%d,",i,k);
        }
    }
    return 0;
}