#include<stdio.h>
int foo(int *arr){
    int size = sizeof(arr);
    printf("%d\n", sizeof(arr));
    for (int i =0;i<size -1;i++){
        printf("%d:  ",arr[i]);
        for (int a = 0; a < arr[i];a++){
            printf("*");
        }
        printf("\n");
    }
    return 0;

}

int main(){
    int arr[] ={1,2,6,7,8,3,7};
    foo(arr);
    return 0;
}