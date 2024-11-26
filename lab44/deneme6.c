#include<stdio.h>
#include<string.h>
int foo(int arr[],int arr2[],int size){
    for (int i = 0; i<size;i++){
        if(arr[i]!=arr2[i]){
            printf("not equal");
            return 1;
        }
    }
    printf("equal");
    return 0;


}

int main(){
    int arr[] ={1,4,3,5,6,7};
    int arr2[] ={1,4,3,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    foo(arr,arr2,size);

    return 0;
}