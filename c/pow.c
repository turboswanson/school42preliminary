#include <stdio.h>
long long int ft_pow(int a,int n,int *depth){
   if (n == 0){
    return 1;
   } 

  
   if (n%2 ==0){
     long long int res = ft_pow(a,n/2,depth);
     (*depth)++;

      return res*res;
   }
   if(n%2 == 1){
    long long int res = ft_pow(a,n-1,depth);
    (*depth)++;
    return a*res;
   }
  
}
long long int main(void){
    int a = 0, n = 0,count = 0;
    scanf("%d %d",&a,&n);
    int depth = 0;
    long long int res = ft_pow(a,n,&depth);
    printf("%d %lld",depth,res);

    
    
    return 0;
}