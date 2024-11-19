#include<stdio.h>
#include<string.h>
int foo(char *text){
    int length = sizeof(text);
    int count=1;
    for(int i = 0; i<length; i++){
        if(text[i] == 9 || text[i] == 46 ||text[i] == 44 || text[i] == 32){
            count++;
        }
    }
    return count;
}
int main(){
    printf("text:  ");
    char text[50];
    fgets(text, sizeof(text), stdin);
    int count = foo(text);
    printf("da gibts %d wörter",count);
    return 0;
}