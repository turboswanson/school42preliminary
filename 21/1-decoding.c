#include <stdio.h>

int coding(char b,char c);
int decoding(unsigned int z, char a);

int main(int argc,char *argv[]){
    char a = 32,b,c;
    unsigned int z = 0;
    
    if (*argv[1] == '0'){
        coding(b,c);
    }

    else{
        decoding(z,a);
    }
  
    return 0;
}

int coding(char b,char c){
    while(c != '\n'){
            scanf("%c%c",&b,&c);
            if(c != 32 && c != '\n'){
                printf("n/a\n");
                return 0;
            }
            printf("%x ",b);
        }
    }

int decoding(unsigned int z, char a){    
    while(a == 32){
        scanf("%x%c",&z,&a);
        
        printf("%c ",z);

        
    }
}
