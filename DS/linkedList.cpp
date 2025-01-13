#include<stdio.h>
struct Node
{
    int data;
    Node* next= NULL;
};

int main(int argc, char const *argv[])
{
    // create empty list
    Node* num_list = NULL;

    // add new node to empty list
    Node newNode;
    newNode.data = 20;
    num_list = &newNode;


    // add new node to empty list
    Node newNode;
    newNode.data = 40;
    Node* temp = num_list;
    num_list = &newNode;
  
    // Adding new node to the end of non empty list
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = &newNode;
   




    return 0;
}
