#include<stdio.h>
#include<string.h>
int foo(int *arr,int zahl){
    int size = sizeof(arr)+1;
    for (int i = 0;i<size;i++){
        if(arr[i] == zahl){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    if(foo(arr,9) == 1){
        printf("VAR");
        return 0;
    }else{
        printf("YOK");
        return 0;
    }
}