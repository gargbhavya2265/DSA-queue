#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    int n;
    cout<<"enter the size of queue"<<endl;
    cin>>n;
    //creation of queue..
    for(int i=0;i<n;i++){
        q.push(i+1);
    }
    int size=n;
    //printing all elements of the queue...
    cout<<"Elements in the queue are: ";
    while(size--){
        int el=q.front();
        cout<<el<<" ";
        q.pop();
        q.push(el);
    }
    cout<<endl;
    cout<<"after operation the size of queue is still : "<<q.size()<<endl;
}