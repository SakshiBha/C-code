#include<iostream>
using namespace std;
int main(){
    int i;
    int arr[]={1,1,1,1,1,0,0,0,1,0,1,0,1,0,1,1,0,0,0,0,1,1,1,};
    int size=23;
    int zeronumb=0;
    int onenumb=0;
    for(i=0;i<size;i++){
        if(arr[i]==0){
            zeronumb++;
        }
        if(arr[i]==1){
            onenumb++;
        }
        cout<<"zeronumber"<<zeronumb<<endl;
        cout<<"onenumber"<<onenumb<<endl;
        
    }

}