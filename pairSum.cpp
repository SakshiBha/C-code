#include<iostream>
#include<vector>
using namespace std;
int main(){
    //PAIR SUM
    vector<int>arr{10,20,40,60,70};
    int sum=80;
    //PRINT ALL PAIRS
    //OUTER LOOP WILL TRAVERSE FOR EACH ELEMENT
    for(int i=0;i<arr.size();i++){
        cout<<"We are at element: "<<arr[i]<<endl;
        int element=arr[i];
        //FOR EVERY ELEMENT, WILL TRAVERSE ON AAGE WALE ELEMENTS
        for(int j=i+1;j<<arr.size();j++){
            if(element+arr[j]==sum){
                cout<<"Pair Found "<<element<<" , "<<arr[j]<<endl;
            }
            cout<<"pair "<<element<<"with "<<arr[j]<<endl;
            //cout<<"("<<element<<","<<arr[j]<<")"<<endl;
        } 
    }
}
