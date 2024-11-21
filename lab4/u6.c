#include<stdio.h>
#include<string.h>
int foo(char text,char text2){
    int a =strlen(text);
    int b = strlen(text2);
    if (a==b){
        for(int i =0; i<a;i++){
            if(text[i] != text2[i]){
                return 0;
            }else{
                return 1;
            }
        }
    }else{
        return 0;
    }
}

int main(){
    printf("BItte geben Sie den ersten text ein:  ");
    char text[80];
    scanf("%79s",text);
    printf("Bitte geben Sie den zweiten text ein:  ");
    char text2[80];
    scanf("%79s", text2);
    if(foo(text,text2) == 1){
        printf("Beide ist gleich");
    }else{
        printf("Beide ist NICHT gleich");
    } return 0;

}

