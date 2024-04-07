// Write a program for linked list implementation.
#include <iostream>
using namespace std;
// a structure for node in linked list
struct Node
{
    int data;
    Node *next;
}Node;
//  Node* first = NULL;
// *first = NULL;
// Node* temp = (Node*)malloc(sizeof(Node));
int main(arc,_argv[]){
    // memory for the number
    node *List = NULL;
    // for each command line argument
    for(int i =0;i<argc;i++){
        // create a new node
        Node *temp = new Node;
        // store the number
        temp->data = atoi(argv[i]);
        // point it to the old first node
        temp->next = List;
        // point first to the new node
        List = temp;
        
    }

    


}

