#include<iostream>
using namespace std;
class Queue{
    int front;
    int* arr;
    int rear;
    int size;

    public:
        Queue(int size){
            this->size=size;
            arr=new int[size];
            front=rear=-1;
        }
    void push(int value){
        if(front==-1 && rear==-1){
            front++;
            rear++;
            arr[rear]=value;
            cout<<"pushed "<<value<<" into the queue"<<endl;
        }
        else if(rear==size-1){
            cout<<"Queue Overflow"<<endl;
        }
        else{
            rear++;
            arr[rear]=value;
            cout<<"pushed "<<value<<" into the queue"<<endl;
        }
    }
    void pop(){
        if(front==-1){
            cout<<"Queue underflow"<<endl;
        }
        else if(front==rear){
            cout<<"popped "<<arr[front]<<" from the queue"<<endl;
            front=rear=-1;
        }
        else{
            cout<<"popped "<<arr[front]<<" from the queue"<<endl;
            front++;
        }
    }
    bool isFull(){
        return rear==size-1;
    }
    bool isEmpty(){
        return front==-1;
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
    q.pop();
    q.pop();
    q.pop();
    q.pop();
    int x=q.Front();
    if(!q.isEmpty()){
        cout<<x<<" ";
    }
}