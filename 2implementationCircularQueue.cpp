#include<iostream>
using namespace std;
class Queue{
    int front,rear;
    int size;
    int *arr;

    public:
        Queue(int size){
            this->size=size;
            front=rear=-1;
            arr=new int[size];
        }
    bool isEmpty(){
        return front==-1;
    }
    bool isFull(){
        return (rear+1)%size==front;
    }
    void push(int value){
        if(isEmpty()){
            front=(front+1)%size;
            rear=(rear+1)%size;
            arr[rear]=value;
            cout<<"pushed "<<value<<" into the queue"<<endl;
        }
        else if(isFull()){
            cout<<"Queue overflow"<<endl;
        }
        else{
            rear=(rear+1)%size;
            arr[rear]=value;
            cout<<"pushed "<<value<<" into the queue"<<endl; 
        }
    }
    void pop(){
        if(isEmpty()){
            cout<<"Queue Underflow"<<endl;
        }
        else if(front==rear){
            cout<<"popped "<<arr[front]<<" from the queue"<<endl;
            front=rear=-1;
        }
        else{
            cout<<"popped "<<arr[front]<<" from the queue"<<endl;
            front=(front+1)%size;
        }
    }
    int Front(){
        if(front==-1){
            cout<<"Queue is Empty"<<endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
};
int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    q.push(5);
    q.push(6);
    q.push(7);
    q.pop();
    q.push(7);
}