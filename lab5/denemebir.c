#include<stdio.h>
#include<string.h>
void sum(int *arr,int size){
    int sum = 0;
    for(int i = 0; i<=size;i++){
        sum = sum + arr[i];
    }
    printf("sum:  %d\n",sum);
}


void product(int *arr,int size){
    int pro = 1;
    for(int i = 0; i<=size;i++){
        pro = pro * arr[i];
    }
    printf("pro:  %d",pro);
}


int main(){
    int arr[] ={1,2,3,4};
    int size = sizeof(arr)/sizeof(arr[0]);

    sum(arr,size);
    product(arr,size);

}