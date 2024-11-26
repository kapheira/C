#include<stdio.h>
#include<string.h>
void foo(int num,int num2){
    int min;
    if(num>num2){
        min = num2;
    }else{
        min = num;
    }
    for(int i = min;i>=1;i--){
        if(num%i == 0 && num2 % i== 0){
            printf("en buyuk bolen %d", i);
            break;        
            }
    }
}

int main(){
    int num;
    int num2;
    printf("erstenum: ");
    scanf("%d",&num);
    printf("zweitenum:");
    scanf("%d",&num2);
    foo(num,num2);
    return 0;
}