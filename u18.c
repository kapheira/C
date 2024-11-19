#include<stdio.h>
#include<string.h>
int foo(char *text){
    int size = strlen(text);
    int count = 0;
    
    for (int i = 0;i<size; i++){
        if(text[i] == 'a'|| text[i] == 'e' || text[i] == 'i'|| text[i] == 'u'||text[i] == 'o'){
            count++;
        }

    }
    printf("%d", count);
    return 0;

}

int main(){
    printf("Bitte geben Sie ein text ein:  ");
    char text[20];
    scanf("%s", text);
    foo(text);
}