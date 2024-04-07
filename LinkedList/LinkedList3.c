// writing an code for linked list in c
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int number;
    struct node* next;

}node;

int main(int argc,char* argv[])
{
    // memory for the numbers
    node* list = NULL;
    // for each command line argument
    for(int i =0;i<argc;i++){
        // convert an argument into int
        int number = atoi(argv[i]);
        // allocate node for the number
        node* n = malloc(sizeof(node));
        // edge case for the node n
        if(n == NULL){
            return 1;
        }
        n->number = number;
        n->next = NULL;
        // if list is empty
        if(list == NULL){
            list = n;
        }
        else{
            // iterate over node in the list
            for(node*ptr = list;ptr != NULL;ptr = ptr->next){
                if(ptr->next== NULL){
                    ptr->next = n;
                    break;
                }
            }
        }
    }
     //printing all the numbers
    for(node *ptr = list;ptr != NULL;ptr = ptr->next){
        printf("%i\n",ptr->number);
    }
  




}
