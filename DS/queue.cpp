#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next= NULL;
};
class MyQueue{
    int count = 0;
    Node* front = NULL;
    Node* rear = NULL;
    public:
    void Enquque(int value){
     Node* newNode = new Node();
     newNode->data = value;
     if(front == NULL){
        rear = newNode;
        front = newNode;
     }else{
        front->next = newNode;
        rear = newNode;
     }
}



int getfront(){
    return front->data;
}

int getRear(){
    return rear->data;
}



int dequeue(){
       int data = 0;
       if(front == NULL){
          printf("list is empty");
       }
       else{
        data  = front->data;
        front = front->next;
       }
       return data;
}





};

int main(int argc, char const *argv[])
{
    MyQueue q;
    q.Enquque(20);
    q.Enquque(50);
    q.Enquque(30);
    cout << "front:"<<q.getfront()<<"rear:"<<q.getRear()<<endl;
    cout << q.dequeue() <<  endl;
    cout << "front:"<<q.getfront()<<"rear:"<<q.getRear()<<endl;
    cout << q.dequeue() <<  endl;
    

    return 0;
}
