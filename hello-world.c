#include <stdio.h>
#include <stdlib.h>

int main(){
    int* ptr; 
    printf("Hello dunyo!");
    printf("\n");
    ptr = (int*)malloc(sizeof(int));
    if (ptr==NULL){
        /* code */
        printf("Alocation failed");
    }else{
        printf("Alocation success \n");
        printf("Alamat memori %p ",  ptr);
        // free(ptr);
    }
    printf("\n");
    ptr = (int*)malloc(sizeof(int));
    if (ptr==NULL){
        /* code */
        printf("Alocation failed");
    }else{
        printf("Alocation success \n");
        printf("Alamat memori %p ",  ptr);
        // free(ptr);
    }
    return 0;
}