#include<iostream>
#include<queue>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of person present to buy tickets"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the tickets person wants to purchase"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the personidx of whom you want to calculate the time needed to buy tickets"<<endl;
    cin>>k;
    int time=0;
    queue<int>q;
    for(int i=0;i<n;i++){
        q.push(i);
    }
    while(arr[k]){
        arr[q.front()]--;
        if(arr[q.front()]!=0){
            q.push(q.front());
        }
        q.pop();
        time++;
    }
    cout<<"time needed to purchase tickets is : "<<time<<endl;
}