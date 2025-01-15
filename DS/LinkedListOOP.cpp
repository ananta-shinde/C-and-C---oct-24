#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next= NULL;
};
class LinkedList{
    int count = 0;
    Node* head = NULL;
    public:
    void insertAtStart(int value){
     Node* newNode = new Node();
     newNode->data = value;
     if(head == NULL){
        head = newNode;
     }else{
        newNode->next = head;
        head = newNode;
     }
}

void insertAtEnd(int value){
    Node* newNode = new Node();
     newNode->data = value;
     if(head == NULL){
        head = newNode;
     }else{
        Node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
     }
}

int lengthOfList(){
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp =temp->next;
    }
    return count;
}

void printList(){
    Node* temp = head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp =temp->next;
    }
}

void deleteAtEnd(){
       if(count == 0){
          printf("list is empty");
       }
       else if(count==1)
       {
         head = NULL;
       }
       else{
       Node* temp = head;
       while(temp->next->next != NULL){
          temp = temp->next;
       }
       temp->next = NULL;
       }
}

void deleteAtStart(){
    if(count == 0){
          printf("list is empty");
    }else{
         head = head->next;
    }
}

void deleteByValue(int value){
       if(count == 0){
          printf("list is empty");
       }else if(head->data == value){
              head=head->next;
       }else{
          Node* temp = head;
          while(temp->next->data != value){
             temp = temp->next;
          }
          temp->next = temp->next->next;
       }
      
}

};
int main(int argc, char const *argv[])
{
    LinkedList list1;
    list1.insertAtStart(20);
    list1.insertAtStart(30);
    list1.insertAtEnd(50);
    list1.printList();
    return 0;
}

