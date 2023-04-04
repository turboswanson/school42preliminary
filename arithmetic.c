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
    char c1,c2;
    scanf("%d%c%d%c",&a,&c1,&b,&c2);
    
    if(c1 !=32 || c2 != '\n'){
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
