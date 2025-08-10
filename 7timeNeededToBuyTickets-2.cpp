#include<iostream>
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
    for(int i=0;i<=k;i++){
        time+=min(arr[i],arr[k]);
    }
    for(int i=k+1;i<n;i++){
        time+=min(arr[i],arr[k]-1);
    }
    cout<<"time needed to buy all the tickets by the kth person is : "<<time<<endl;
}