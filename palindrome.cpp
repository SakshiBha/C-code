#include<iostream>
using namespace std;
int main(){
    int i,rev=0,asli;
    cout<<"enter number";
    cin>>i;
    asli=i;
    while(i>0){
        rev=rev*10+i%10;
        i=i/10;
    }
    if(asli==rev)
    cout<<"\n palindrome";
    else
    cout<<"\n not palindrome";
    return 0;
}