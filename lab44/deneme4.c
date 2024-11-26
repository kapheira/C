#include<stdio.h>
#include<string.h>
#include<math.h>
void perfekt(int dat) {
    int sum = 0;
    for (int i =1; i<dat;i++){
        if (dat % i == 0){
            sum += i;
        }
    }
    if (sum ==dat){
        printf("perfetkzahl");
    }else{
        printf("kein perfektzahl");
    }
}
int main(){
    int dat;
    printf("gib ein zahl: ");
    scanf("%d",&dat);
    perfekt(dat);
}