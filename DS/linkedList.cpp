#include<stdio.h>
struct Node
{
    int data;
    Node* next= NULL;
};

Node* insertAtStart(Node* head,int value){
     Node* newNode = new Node();
     newNode->data = value;
     if(head == NULL){
        head = newNode;
     }else{
        newNode->next = head;
        head = newNode;
     }
     return head;

}

Node* insertAtEnd(Node* head,int value){
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

     return head;
}

int lengthOfList(Node* head){
    int count = 0;
    Node* temp = head;
    while(temp!=NULL){
        count++;
        temp =temp->next;
    }
    return count;
}

void printList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        printf("%d\t",temp->data);
        temp =temp->next;
    }
}

int main(int argc, char const *argv[])
{
    // create empty list
    Node* num_list = NULL;
    printf("length:%d\n",lengthOfList(num_list));
    num_list=insertAtStart(num_list,20);
    num_list=insertAtStart(num_list,30);
    num_list=insertAtEnd(num_list,50);
    printf("length:%d\n",lengthOfList(num_list));
    printList(num_list);
    




    return 0;
}
