#include<iostream>
#include<vector>
using namespace std;
void waveprint(vector<vector<int>>v){
    //m=rows
    //n=columns
    int m=v.size();
    int n=v[0].size();
    for(int startcol=0;startcol<n;startcol++){
        //even no. of col->Top to Bottom
        if(startcol%2==0){
            for(int i=0;i<m;i++){
                cout<<v[i][startcol]<<" ";
            }
        }
        else{
            //Odd no. of col->Bottom to Top
            for(int i=m-1;i>=0;i--){
                cout<<v[i][startcol]<<" ";
            }
        }
    }
}
int main(){
    vector<vector<int>>v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };
    waveprint(v);
    return 0;
}
