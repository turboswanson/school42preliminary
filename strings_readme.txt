STRINGS MANUAL

1)char s1[100]={0}; - init a string which consists of 100 elements full of 0

2)gets(s1);scanf("%s",s1);(scanf("%s%s",s1,s2); - get symbols toa string
gets(str,length,stdin);

3)puts(s1);printf("%s",s1);     for(int i=0;i<number;i++{
                                   printf("%c",str[i]);
                                }                               - to print the string
fputs(str,length,stdout);                                                        

4)'\0' - end of the string

5)fflush(stdin); - to clean stdin

6)int n=strlen(str); - length

7)int n=strcmp(str1,str2); 0 - equal, 1-str1>str2, -1 str1<str2

int n = strcasecmp(s1,s2); - compares two strings IRRESPECTIVE of the case of characters.

8)strcat(str1,str2);  - str2 add to str1 printf("%s",str1);

9)strcpy(str1,str2); - copy

10) while(scanf("%s",str)==1){
    printf("%s"str);
}
profootbal      eeeee 2222 
profootbal eeeee 2222 

delete spare spaces

11) scanf("%c",&c);    
    putchar(c);
    putchar('\n');


 