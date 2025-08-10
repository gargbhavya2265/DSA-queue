#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    //constructor..
    Node(int value){
        data=value;
        next=NULL;
    }
};
class Queue{
    Node* front;
    Node* rear;

    public:
        Queue(){
            front=rear=NULL;
        }
    bool isEmpty(){
        return front==NULL;
    }
    void push(int value){
        if(isEmpty()){
            cout<<"pushed "<<value<<" into the queue"<<endl;
            front=new Node(value);
            rear=front;
        }
        else{
            rear->next=new Node(value);
            if(rear->next==NULL){
                cout<<"Queue Overflow"<<endl;
                return;
            }
            cout<<"pushed "<<value<<" into the queue"<<endl;
            rear=rear->next;
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
            return;
        }
        else{
            cout<<"popped "<<front->data<<" from the queue"<<endl;
            Node* temp=front;
            front=front->next;
            delete temp;
        }
    }
    int Front(){
        if(isEmpty()){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
};
int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.pop();
    // q.pop();
    // q.pop();
    int x=q.Front();
    if(!q.isEmpty()){
        cout<<x<<" "<<endl;
    }
}