#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int>q;
    int n;
    cout<<"Enter the size of the queue"<<endl;
    cin>>n;
    //creation of queue...
    for(int i=0;i<n;i++){
        q.push(i+1);
    }
    stack<int>st;
    while(!q.empty()){
        st.push(q.front());
            q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    cout<<"Elements in the queue are present in reverse order : ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}