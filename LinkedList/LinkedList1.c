// writing the code for inserting node in acsending order in a linked list
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int number;
    struct node *next;

}node;

int main(int argc,char* argv[]){
    // memory for the number
    node *list = NULL;
    //for each command line argument
    for(int i =0;i<argc;i++){

        // converting argument to integer
        int number = atoi(argv[i]);
        // allocating node for the number
        node *n = malloc(sizeof(node));
        if(n==NULL){
            return 1;
        }
        // inserting number into the node
        n->number = number;
        n->next = NULL;
        // inserting number into the linked list
        if(list == NULL){
            list = n;
        }
        else{
            // setting pointer to the first node
            node *ptr = list;
            //traversing the linked list
            while(ptr->next != NULL){
                ptr = ptr->next;
            }
            //inserting new node into the linked list
            ptr->next = n;
        }
    } 
    //printing all the numbers
    for(node *ptr = list;ptr != NULL;ptr = ptr->next){
        printf("%i\n",ptr->number);
    }
}