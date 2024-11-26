#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct Stack{
    int num;
    struct Stack* next;
}stack;


stack* ersteller(int data){
    stack* neu =(stack*)malloc(sizeof(stack));
    neu->num = data;
    neu->next = NULL;
    return neu;
}

void add(stack** head,int data){
    stack * neu = ersteller(data);
    neu->next = *head;
    *head = neu;

}

void removed(stack** head){
    if(*head == NULL){
        printf("nos");
    }
    if((*head)->next == NULL){
        printf("liste bos %d gitti", (*head) ->num);
        free(*head);
        *head = NULL;
    }
    stack* neu = *head;
    *head = (*head)->next;
    printf("%d gitti",neu -> num);
    free(neu); 
}

void writed_list(stack* head){
    while(head != NULL){
        printf("%d ", head ->num);
        head = head -> next;
    }
    printf("\n---------------------------------\n");
}

int main(){

    stack* head = NULL;

    add(&head,1);
    add(&head,2);
    add(&head,3);
    writed_list(head);
    removed(&head);
    

}