#include <stdio.h>

int main(void){
    int n=0,res=1;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        res*=i;
    }

    printf("%d",res);

    return 0;
}