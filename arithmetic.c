#include <stdio.h>

int sum(int a,int b){
return a+b;
}

int sub(int a, int b){
    return a-b;
}

int mul(int a,int b){
    return a*b;
}

int div(int a,int b){
    return a/b;
}

int main(void){
    int a=0,b=0;
    char c;
    scanf("%d%d%c",&a,&b,&c);
    
    if(c != '\n'){
        printf("n/a\n");
        return 0;
    }
    if (b==0){
        printf("%d %d %d n/a\n",sum(a,b),sub(a,b),mul(a,b));
        return 0;
    }

    printf("%d %d %d %d",sum(a,b),sub(a,b),mul(a,b),div(a,b));

    return 0;
}