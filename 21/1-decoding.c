#include <stdio.h>

int main(void){
    unsigned int a1;
    char a2;
    while(a2 != '\n'){
        scanf("%x%c",&a1,&a2);
        printf("%c%c",a1,a2);
    }
    /*char c1;
    char c2;
    while(c2 != '\n'){
        scanf("%c%c",&c1,&c2);
        printf("%x%c",c1,c2);
    }*/

    return 0;
}