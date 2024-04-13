#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,4,6,8,10};
     int sizeA=6;
    int brr[]={3,4,5,6};
     int sizeB=4;
    vector<int>ans;
    int element;
  
    for(int i=0;i<sizeA;i++){
        ans.push_back(arr[i]);
        int element=arr[i];
    
    
    for(int j=0;j<sizeB;j++){
         if (element ==brr[j]){
     
        brr[j]=-1;
        
        ans.push_back(element);
         }
    }
    }  

    
    // print ans
    cout<<"printing ans array "<<endl;
    for(auto value:ans){
    cout<<value<<" ";
    }


}