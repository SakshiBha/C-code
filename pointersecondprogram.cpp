#include <iostream>
using namespace std;
int main ()
{
    int A[5] {2,4,6,8,10}, *p=A;
    cout<<*p<<endl;
    p++;
    cout<<*p<<endl;

    return 0;
}