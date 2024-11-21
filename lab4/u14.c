#include<stdio.h>
#include<string.h>
void foo(int *num){
    for(int i= 0; i<12;i++){
        for(int j = 0; j< 12; j++){
            if(num[j] > num[j+1]){
                char a = num[j];
                num[j] = num[j+1];
                num[j+1] = a;
            }
        }
    }

    for (int i = 0; i < 12; i++){
        printf("%d ", num[i]);
    }
}
int main(){
    int zz[12] = {2,9,4,78,23,56,32,31,12,21,19,17};
    foo(zz);
}