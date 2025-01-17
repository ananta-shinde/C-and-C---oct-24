#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node* next= NULL;
};
class MyStack{
    Node* top = NULL;
    public:
    void push(int value){
        Node* newNode = new Node();
        newNode->data = value;
        if(top == NULL){
            top = newNode;
        }else{
            newNode->next = top;
            top = newNode;
        }
    }
    int pop(){
        int data = 0;
        if(top == NULL){
            cout << "stack is empty";
        }else{
           data = top->data;
           top = top->next;
        }
        return data;
    }

    int getTop(){
        return top->data;
    }
};
int main(int argc, char const *argv[])
{
    MyStack m;
    m.push(20);
    m.push(50);
    m.push(30);
    cout << m.pop()<<endl;
    cout << m.pop()<<endl;
    return 0;
}
