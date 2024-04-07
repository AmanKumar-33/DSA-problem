// writing an code for the argument 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    int data;
    struct node *next;
}node;
int main(int argc,char *argv[]){
    node *list = NULL;
     
     
    for(int i =1;i<argc;i++){
        //changing string to number uisng (atoi)
        int number = atoi(argv[i]);
        // printf("%i\n",number);
        node *n = malloc(sizeof(node));
        if(n == 0){
            // free the memory space 
            return 1;
        }
        n->data = number;
        n->next = list;
        list = n;
    }
    // printing the linked list 
    // taking a pointer to travers around the linked list
    node *ptr = list;
    while(ptr != NULL){
        printf("%i\n",ptr->data);
        ptr = ptr->next;
    }

}