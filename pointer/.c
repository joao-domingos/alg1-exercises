#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void qCaracteres(char palavra[], char c, int *x, float *y) {
    int i;
    *x = 0;
    for(i = 0; i < strlen(palavra); i++) {
        if(c == palavra[i]) {
            *x += 1;
        }
    }
    
    *y = *x / (float)strlen(palavra);
    
    printf("%d\n", *x);
    printf("%.2f\n", *y);
    
}

int main() {
    char c;
    char string[20];
    
    scanf("%s", string);
    scanf(" %c", &c);
    
    int x;
    float y;
    
    qCaracteres(string, c, &x, &y);
    
    return 0;
}
