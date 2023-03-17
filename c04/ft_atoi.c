#include <stdio.h>

int main(void){
    char str[100];
    gets(str);
    int n = atoi(str);

    printf("%d",n);
    return 0;
}