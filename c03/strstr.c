

#include <stdio.h>  
#include <string.h> 
int main (void)
{    
   char str1[100];
   char str2[100];
   gets(str1);
   gets(str2);
   char *num;
   num = strstr(str1,str2);

   printf("%d %d",str1,num); 
    

   return 0;
}