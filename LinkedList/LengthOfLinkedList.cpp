// writing an code for the finding the length of linked list.\
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};
// function to calculate the length of linked list
int lengthoflinkedlist(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp != NULL){
        head = head->next;
        count++;
    }
    return count;
}

int main(){
    vector<int>arr = {2,5,8,7};
    // create an linkedlist
    Node* head = new Node(arr[0]);
    head->next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    // printing the length of linked list
    cout<<"lengthoflinkedlist-> "<<lengthoflinkedlist(head)<<'\n';
     

}