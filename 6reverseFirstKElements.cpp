#include<iostream>
#include<queue>
#include<stack>
using namespace std;
int main(){
    queue<int>q;
    stack<int>st;
    int n;
    cout<<"Enter the number of elements in the queue "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        q.push(i+1);
    }
    int k;
    cout<<"Enter the no of the elements you want to reverse from the beginning"<<endl;
    cin>>k;
    int remaining_el=n-k;
    while(k--){
        st.push(q.front());
        q.pop();
    }
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    while(remaining_el--){
        q.push(q.front());
        q.pop();
    }

    cout<<"Elements in the queue are present in this order: ";
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}