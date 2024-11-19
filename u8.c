#include<stdio.h>
    int foo(int year){
    if (year % 4 != 0) {
        printf("NOT");
        return 0;
    } else if (year % 400 == 0) {
        printf(" EIN");
        return 0;
    } else if (year % 100 == 0) {
        printf(" NOT");
        return 0;
    } else {
        printf("EIN");
        return 0;
    }

}

int main(){
    printf(" bitte geben sie ein jahr:  ");
    int jahr;
    scanf("%d", &jahr);
    foo(jahr);
}