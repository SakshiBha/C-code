#include<iostream>
#include<limits.h>
using namespace std;
                ////ROW SUM
                void PrintColwiseSum(int arr[][3],int rows,int cols){
                    for(int i=0;i<rows;i++){
                        int sum=0;
                        for(int j=0;j<cols;j++){
                            sum=sum+arr[j][i];
                        }
                        cout<<sum<<endl;
                    }
                }
      int main(){
        int arr[3][3];
        int rows=3;
        int cols=3;
        for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>arr[i][j];
        }    
        }
        for(int i=0;i<rows;i++){
         for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
         }   
         cout<<endl;
        }
        PrintColwiseSum(arr,rows,cols);
        return 0;
      }          
                ////LINEAR SEARCH
// bool Findkey(int arr[][3],int rows,int cols,int key){
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             if(arr[i][j]==key)
//             return true;
//         }
//     }
//     return false;
// }
// int main(){
//     int arr[3][3];
//     int rows=3;
//     int cols=3;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     int key=8;
//     if(Findkey(arr,3,3,key)){
//         cout<<"true"<<endl;
//     }
//     else{
//         cout<<"false"<<endl;
//     }
//     return 0;
// }
                ////FIND MAXIMUM ELEMENT
// int getmax(int arr[][3],int rows,int cols){
//     int maxi=INT_MIN;
//     for(int i=0;i<rows;i++){
//     for(int j=0;j<cols;j++){
//         if(arr[i][j]>maxi){
//             maxi=arr[i][j];
//         }

//         }
//     }
//     return maxi;
// }
// int main(){
//     int arr[3][3];
//     int rows=3;
//     int cols=3;
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     int a=getmax(arr,rows,cols);
//     cout<<getmax(arr,rows,cols);
//     cout<<" max number: "<<getmax(arr,rows,cols);
//     return 0;
// }
    

