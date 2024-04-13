#include<iostream>
using namespace std;
int main(){
    int arr[8]={10,20,30,40,50,60,70,80};
    int size=8;
    int start=0;
    int end=size-1;
    
    // while(start<=end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }
    // for(int i=0;i<size;i++){
    //     cout<<arr[i]<<" ";
    // }
     while(true){
         if(start>end)
         break;
     }
     if(start==end){
         cout<<arr[start]<<" ";
     }
     else{
         cout<<arr[start]<<" ";
         cout<<arr[start]<<" ";
     }
     start++;
     end--;
     //PRINTING ARRAY
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
     }
}
    
    
    

    // int arr[]={1,3,5,7,-5,4,6,};
    // int size=7;
    // int INT_MAX;
    // int mini= INT_MAX;
    // for(int i=0;i<size;i++){
    //     if(arr[i]<mini){
    //         mini=arr[i];
    //     }
    // }
    // cout<<mini<<endl;
    // int arr[]={2,5,3,7,5,8,9,10,12,24,32};
    // int size=11;
    
    // int maxi=0;
    // for(int i=0;i<size;i++){
    //     if(arr[i]>maxi){
    //         maxi=arr[i];
    //     }
    // }
    // cout<<maxi<<endl;
    // return 0;

    
    // int a[]={0,0,0,0,0,1,0,1,1,1,1,0,1,0,1,0,0,1,1,1,1};
    // int size=21;
    // int zerosCount=0;
    // int onesCount=0;
    
    // for(int i=0;i<size;i++){
    //     if(a[i]==0){
    //     zerosCount++;
    //     }
    //     if(a[i]==1){
    //     onesCount++;
    //     }
    // }
    // cout<<"zerosCount"<<zerosCount<<" "<<endl;
    // cout<<"onesCount"<<onesCount<<" "<<endl;
    // return 0;
 