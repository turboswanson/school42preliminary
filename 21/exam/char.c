#include <stdio.h>
#include <stdlib.h>

int main(){

// char c;

// int flag = 1;
// while((c = getchar()) != '\n'){
//     if(c == ' '){
//         flag = 1;
//         putchar(c);
//     }
//     else if(flag){
//         putchar(c-32);
//         flag = 0;
//     }
//     else{
//     putchar(c);
//     }
// }

char *s = malloc(1*sizeof(char));

int i = 0;
while(1){
    scanf("%c",&s[i]);
    if(s[i] =='\n'){
        break;
    }
    i++;
    s = realloc(s,(i+1)*sizeof(char));
}

*(s+i)='\0';

int flag = 1;
for(int k = 0; k < i; k++){
    if(*(s+k) == ' '){
        flag = 1;
        printf("%c",*(s+k));
    }

    else if(flag){
        printf("%c",*(s+k)-32);
        flag = 0;
    }

    else{
        printf("%c",*(s+k));

    }
}


free(s);

 return 0;
}