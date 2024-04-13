#include<iostream>
#include<vector>
using namespace std;
// int FindUnique(vector<int>arr){
//     int ans=0;
//     for(int i=0;i<arr.size();i++){
//         ans=ans^arr[i];
//     }
//     return ans;
// }
//  int main(){
// int arr[]={1,2,3,4,5,6,7,8};
// int size=8;
// int start=0;
// int end=size-1;
// while(start<end){
//     if(start==end){
//         cout<<arr[end]<<" ";
//     }
//     else{
//         cout<<arr[start]<<" ";
//         cout<<arr[end]<<" ";
//     }
//     start++;
//     end--;
// }
// 

// int n;
// cout<<"enter the size of array "<<endl;
// cin>>n;
// vector<int>arr(n);
// cout<<"enter the elements "<<endl;
// for(int i=0;i<arr.size();i++){
//     cin>>arr[i];
// }
//     int uniqueElement=FindUnique(arr);
//     cout<<"Unique Element is"<<uniqueElement<<endl;
//     return 0;
// }
// 
// int main(){
//     int arr[]={1,3,5,7,9};
//     int sizeA=5;
//     int brr[]={2,4,6,8};
//     int sizeB=4;
//     vector<int>ans;
//     for(int i=0;i<sizeA;i++){
//         ans.push_back(arr[i]);
//     }
//     for(int i=0;i<sizeB;i++){
//         ans.push_back(brr[i]);
//     }
//     cout<<" printing ans array "<<endl;
//     for(int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//     }
// }
//  int main(){
//     vector<int>arr{1,2,3,4,6,8};
//      vector<int>brr{3,4,10};
//      vector<int>ans;
//      for(int i=0;i<arr.size();i++){
//          int common=arr[i];
//          for(int j=0;j<brr.size();j++){
//              if(common==brr[j]){
//                  ans.push_back(common);
//              }
//          }
//      }
//      for(auto value:ans){
//          cout<<value<<" ";
//      }
//  }