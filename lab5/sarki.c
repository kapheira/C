#include<stdio.h>
#include<string.h>
#include<stdlib.h>


typedef struct Playlist{
    int num;
    struct Playlist* next;
}sarki;

void add(sarki **list,int data){
   if(*list == NULL){
    *list = (sarki*)malloc(sizeof(sarki));
    (*list)->num = data;
    (*list)->next = NULL;
   }
    sarki *temp = *list;
   
    
    while(temp->next !=NULL){
        temp = temp->next;
    }

    sarki *tail = (sarki*)malloc(sizeof(sarki));
    tail->num = data;
    tail->next = NULL;
    temp->next = tail;

}

void add_head(sarki **list,int num){
    sarki *head = (sarki*)malloc(sizeof(sarki));
    head->num = num;
    head ->next = *list;
    *list = head;
    

}

void add_pos(sarki **list,int num){
    sarki *temp = *list;
    sarki *ara = (sarki*)malloc(sizeof(sarki));
    ara->num = num;
    ara->next = NULL;
    sarki *iki = NULL;
    while(temp->num < num){
        iki = temp;
        temp = temp->next;
    }
    iki->next = ara;
    ara->next = temp;
   // *list = iki;

    
}

void writed_list(sarki *list){
    while(list !=NULL){
        printf("%d ", list->num);
        list = list->next;
    }
    printf("\n------------------------------------\n");
}

int main(){
    sarki* list = NULL;
    add(&list,2);
    //add(&list,3);
    add(&list,4);
    writed_list(list);
    add(&list,5);
    writed_list(list);
    add_head(&list,0);
    writed_list(list);
    add_pos(&list,3);
    writed_list(list);

    return 0;

}


