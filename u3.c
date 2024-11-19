#include <stdio.h>
#include<ctype.h>
int main(){
    char text[20];
    printf("\n geben sie ein : ");
    scanf("%s",&text);
    char text2[20]="";
    for (int i =0;i<20;i++){
        text2[i] =(char)toupper(text[i]);
    }
    text2[20]= "\0";
    printf("%s",text2);
    return 0;
}
