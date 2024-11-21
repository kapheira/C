#include<stdio.h>
//#include<string.h>

void foo(const char *str) {
    int count[256] = {0}; 
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        count[(unsigned char)str[i]]++;
    }

    printf("die zahl :\n");
    for (i = 0; i < 256; i++) {
        if (count[i] > 0) {
            printf("'%c': %d\n", i, count[i]);
        }
    }
}


int main(){
    printf("Bitte geben Sie den text ein: ");
    char text[52];
    scanf("%s", &text);
    foo(text);


}