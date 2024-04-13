#include<iostream>
using namespace std;
int main(){
    int i,j,count=0;
    cout<<"enter number";
    cin>>i;
    j=1;
    while(j<=i){
        if(i%j==0){
        count++;
        }
        j++;
    }
    if(count==2)
    cout<<"prime no.";
    else
    cout<<"not prime no.";
    
    return 0;

}