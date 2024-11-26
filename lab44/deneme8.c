#include<stdio.h>
#include<string.h>
int foo(int y){
    if((y%4 == 0 && y%100 != 0) || y%400 == 0){
        printf("leapyear");
    }else{
        printf("not leapyear");
    }
}
int main(){
    printf("yil gir: ");
    int year;
    scanf("%d", &year);
    foo(year);
}