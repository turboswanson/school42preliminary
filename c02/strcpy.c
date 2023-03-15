#include <stdio.h>
char ft_strcpy(char * src, char * dest){
   int i=0;
   for(i;src[i];i++){
    dest[i]=src[i];
   }
   return *dest;  
   
}
int main(void){
    int n=10;
    char src[n];
    char dest[n];    
    gets(src);

    ft_strcpy(&src,&dest);
    puts(dest);
    return 0;
}
