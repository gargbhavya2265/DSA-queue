#include<iostream>
#include<stack>
using namespace std;
class Queue{
    stack<int>st1;
    stack<int>st2;

public:
    bool isEmpty(){
        return st1.empty() && st2.empty();
    }
    void push(int x){
        st1.push(x);
    }
    int pop(){
        if(st2.empty() && st1.empty()){
            return 0;
        }
        if(!st2.empty()){
            int el=st2.top();
            st2.pop();
            return el;
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            int el=st2.top();
            st2.pop();
            return el;
        }
    }
    int peek(){
        if(isEmpty()){
            return 0;
        }
        if(!st2.empty()){
            return st2.top();
        }
        else{
            while(!st1.empty()){
                st2.push(st1.top());
                st1.pop();
            }
            return st2.top();
        }
    }
};
int main(){

}