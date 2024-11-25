#include<stdio.h>
#include<stdlib.h>


typedef struct Person{
    int data; 
    struct Person *next;
}person;

void add_head(person **list,int data){
    person *temp = (person*)malloc(sizeof(person));
    temp->data =data;
    temp -> next = *list;
    *list = temp;
}

void writed_list(person *list){
    while(list !=NULL){
        printf("%d ", list->data);
        list = list->next;
    }
    printf("\n------------------------------------\n");
}


int main(){
    person *prs = NULL;
    add_head(&prs,4);
    add_head(&prs,2);
    add_head(&prs,6);
    writed_list(prs);







    return 0;
}