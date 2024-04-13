#include<iostream>
#include<vector>
using namespace std;
// unique
int FindUnique (vector<int>arr){
     int ans=0;
     for(int i=0; i<arr.size();i++){
         ans=ans^arr[i];
     }
     return ans;
     
 }
int main(){
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    
    vector<int>arr(n);
    cout<<"enter the elements"<<endl;
    // taking input
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int uniqueElement= FindUnique(arr);
    cout<<"unique Element is "<<uniqueElement<<endl;
    return 0;
}
    





