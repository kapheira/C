#include<stdio.h>
#include<string.h>
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
void add_tail(person **list,int a){

    person *temp = *list;
    while(temp->next != NULL){
        temp = temp->next;
    }
    person *tail= (person*)malloc(sizeof(person));
    tail->data = a;
    tail->next =NULL;
    temp->next = tail;

}

void add_point(person **list,int data){

}


int main(){
    person *prs = NULL;
    add_head(&prs,4);
    add_head(&prs,2);
    add_head(&prs,6);
    add_tail(&prs,8);
    writed_list(prs);


    
    return 0;
}