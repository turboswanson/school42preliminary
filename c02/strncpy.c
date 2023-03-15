#include <stdio.h>
int ft_strlen(char * src){
    int i=0;
    for(i;src[i];i++);
 return i;  
}
char ft_strncpy( char * src, char *dest, int a, int b){
    
    for(int i=0;src[i];i++){
        dest[i]=src[i];
    }
    if(b<a){
    for(int i=b;i<=a;i++){
        dest[i]='0';
    }
    }
    return * dest;
}
int main(void){
    int n=10;
    char src[n];
    char dest[n];
    int lim=5;
    gets(src);
    int num = ft_strlen(&src);
    ft_strncpy(&src,&dest,lim,num);
    puts(dest);
    
    return 0;
    
}