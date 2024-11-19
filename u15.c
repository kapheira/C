#include<string.h>
#include<stdio.h>
int foo(char *text){
    char text2[20];
    int length = strlen(text);

    for (int i = 0; i < length; i++) {
        text2[i] = text[length - i - 1];  
    }
    
    text2[length] = '\0'; 

    if(strcmp(text, text2) == 0){
        printf("polindrome");
        return 0;
    }else{
        printf("NOT polindrome");
        return 0;
    }

}
int main(){
    printf("bitte geben sie ein text ein:  ");
    char text[20];
    scanf("%s", text);
    foo(text);
    return 0;
}