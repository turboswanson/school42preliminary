#include <stdio.h>

int max(int a, int b) { 

    return a > b ? a : b; 

}

int main() {
    int a, b;
    char c1,c2;

    scanf("%d%c%d%c",&a,&c1,&b,&c2);

    if (c1 != 32 || c2 != '\n') {
        printf("n/a\n");
    }
        
    else {
        printf("%d\n", max(a,b));
    }

    return 0;
}

