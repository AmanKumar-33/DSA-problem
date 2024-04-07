// writing a program for linked list where the data of node will automatically insert in order

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    int data;
    struct node *next;

}node;

int main(int argc,char * argv[]){
    // memory for the number
    node *list = NULL;
    // for each command line argument
    for(int i =1;i<argc;i++){
        
        // changing the value from string to integer using atoi function
        int number = atoi(argv[i]);

        // allocate node for the number
        node *n = malloc(sizeof(node));

        // taking the edge case condition
        if(n == NULL){
            // free the memory space 
            return 1;
        }
        n ->data = number;
        n->next = list;
        // if list is empty
        if(list == NULL){
             list = n;

        }
        // if number belong at the beginning of the list
        else if(n->data <list->data){
            n->next = list;
            list = n;
        }
        // if number belong latter in the list

        else{
            // iterate over node in the list
            for(node *ptr= list;ptr!= NULL;ptr = ptr->next){
                if(ptr->next ==NULL){
                // append node
                   ptr->next = n;
                   break;
                }
            // if in the middle of the list 
                if(n->data < ptr->next->data){
                    n->next = ptr ->next;
                    ptr->next = n;
                   break;
                }
            // if at the end of list
               

            }

        }

        // printing the linked list 
        // taking a pointer to travers around the linked list
        // node *ptr = list;
        
        //     printf("%i\n",ptr->data);
        //     ptr = ptr->next;
        // }

         
    }

}