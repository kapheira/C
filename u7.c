#include<stdio.h>
#include<string.h>
int foo(int erst ,int zweit);
int main(){
    printf("bitte geben sie erste zahl:  ");
    int erst;
    scanf("%d" , &erst);
    printf("bitte geben sie zweit zahl:  ");
    int zweit;
    scanf("%d", &zweit);
    foo(erst,zweit);

}
int foo(int erst, int zweit){
    int i;
    if(erst==zweit){
        printf("%d" , erst);
        return 0;
    }else if(erst > zweit){
        i= zweit;
    }else{
        i = erst;
    }
    while(i != 1){
        int a = i;
        for (int j = a; j > 1 ;j--){
            i--;
            if(erst % j == 0 && zweit % j == 0){
                printf("die zahl ist %d", j);
                return 0;
                i--;
            }else{
                i--;
            }
        
        }
        printf("es gibt keine gcd. gcd ist 1"); 
        return 0;
    }
}

/*#include<stdio.h>
#include<string.h>
int foo();
int main(){
    printf("bitte geben sie erste zahl:  ");
    int erst;
    scanf("%d" , &erst);
    printf("bitte geben sie zweit zahl:  ");
    int zweit;
    scanf("%d", &zweit);
    foo(erst,zweit);

}
int foo(int erst, int zweit){
    int i;
    if(erst==zweit){
        printf("%d" , &erst);
        return 0;
    }else if(erst > zweit){
        i= zweit;
    }else{
        i = erst;
    }
    while(i != 1){
        int a = i;
        for (int j = a; j > 1 ;j--){
            i--;
            if(erst % j == 0 && zweit % j == 0){
                printf("die zahl ist %d", &j);
                return 0;
                i--;
            }else{
                i--;
            }
        
        }
        printf("es gibt keine gcd. gcd ist 1"); 
        return 0;
    }
} */