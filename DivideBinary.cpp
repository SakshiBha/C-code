#include<iostream>
using namespace std;
int solve(int dividend,int divisor){
    int s=0;
    // abs (absolute ek aysa function hain jiske duara absolute value le sakte hain aur jo bhi no. hain uska sign hatta sakte hain)
    int e=abs(dividend);
    int ans=0;
    int mid=s+(e-s)/2;
    while(s<=e){
        //perfect solution
        if( abs(mid*divisor)==abs(dividend) ){
            ans= mid;
            break;
        }
        //not perfect solution
        if(abs(mid*divisor)>abs(dividend)){
            //left
            e=mid-1;
        }
        else{
            //ans store
            ans=mid;
            //right store
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }

    if((divisor<0 && dividend<0) || (divisor>0 && dividend>0))

    return ans;

    else{
        return -ans;
    }

}
int main(){
    int dividend  =-22;
    int divisor=7;

    int ans=solve(dividend,divisor);
    cout<<"Ans is "<<ans<<endl;
    return 0;
}