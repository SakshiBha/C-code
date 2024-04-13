#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[]={1,2,3,4,5,6,7,8,9};
    int size=9;
    int key=1;
    bool flag=0;
for(i=0;i<size;i++){
    if(arr[i]==key){
    flag=1;
    }
}
if(flag)
cout<<"present"<<endl;
else
cout<<"absent"<<endl;
return 0;


    }
