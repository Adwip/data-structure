#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Ini untuk double linked list
struct ListDescriptor{
    struct ListDescriptor *previous;
    char content[10];
    struct ListDescriptor *next;
};


int main(){
    struct ListDescriptor *LinkedList = NULL;
    struct ListDescriptor *temp = NULL, *list = NULL;
    char isiContent[10];
    int totalList;
    printf("Input rencana jumlah list : \n");
    scanf("%d", &totalList);
    printf("\n");
    for (int i = 0; i < totalList; i++){
        list = (struct ListDescriptor*)malloc(sizeof(struct ListDescriptor));
        if (list==NULL){
            printf("Alokasi gagal \n");
            return 0;
        }
        
        printf("Masukkan kontent list ke %d : \n", i+1);
        scanf("%s", isiContent);
        printf("\n");
        strcpy(list->content, isiContent);

        if (LinkedList==NULL){
            LinkedList = (struct ListDescriptor*)malloc(sizeof(struct ListDescriptor));
            LinkedList = list;
            temp = LinkedList;
        }else{
            temp->next = list;
            list->previous = temp;
            strcpy(list->content, isiContent);
            temp = list;
        }
    }
    printf("Input selesai \n");


    printf("Print semua nilainya : \n");
    struct ListDescriptor *pointer, *lastList;
    int index = 1;
    pointer = LinkedList;
    while (pointer!=NULL){
        printf("List ke : %d, isinya adalah : %s dan alamat memori adalah %p \n ", index, pointer->content, pointer);
        index++;
        pointer = pointer->next;
        if (pointer!=NULL){
            lastList = pointer;
        }
    }
    printf("\n");
    printf("Print nilai dari belakang : \n");
    pointer = lastList;
    index--;
    while (pointer!=NULL){
        printf("List ke : %d, isinya adalah : %s dan alamat memori adalah %p \n ", index, pointer->content, pointer);
        index--;
        pointer = pointer->previous;
        if (pointer!=NULL){
            lastList = pointer;
        }
    }
}