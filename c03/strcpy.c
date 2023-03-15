#include <stdio.h>
#include <string.h>


int main(void){
    int n=10;
    char str[n];
    gets(str);
    
    int l = strlen(str);

    for(int i=0;i<l;i++){
        putchar(str[i]);
    }

    return 0;
}