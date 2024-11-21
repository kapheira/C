#include<stdio.h>
#include<string.h>
int foo(int zahl){
    for(int j = 0; j<zahl;j++){
        for(int s =0; s< zahl-j;s++){
            printf(" ");
        }
        for(int i = 0; i <j;i++){
        printf(" * ");
        }
        printf("\n");
    }
    return 0;
}
int main(){
    foo(7);
    return 0;
}