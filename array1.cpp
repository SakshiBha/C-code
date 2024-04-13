#include<iostream>
using namespace std;
int main(){
    int i,n=10,a[10],key;
    cout<<"enter numbers";
    for(i=0;i<n;i++){
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            cout<<"found at"<<i;
            return 0;
        }
    }
    cout<<"not found";
    return 0;
}