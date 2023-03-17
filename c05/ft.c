#include <stdio.h>
int ft_nbr(int n){
    n++;
    ft_if(n);
}
void ft_if(int n){
    int res = 0;
    int count = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count <= 2){
        printf("%d",n);
        return 0;
    }
    else{
        ft_nbr(n);
    }

    
}
int main(void){
    int n=0;
    scanf("%d",&n);
    ft_if(n);

    return 0;
}