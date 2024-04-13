#include<iostream>
using namespace std;
class A
{
    protected:
    int x;
    public:
    void input()
    {
        cout<<"\n enter number:";
        cin>>x;
    }
};
    class B:public A
    {
        int y;
        public:
    void getdata()
    {
        cout<<"\n enter number:";
        cin>>y;
    }
    void putdata()
    {
    cout<<"\n multiplication = "<<x*y;
    }
    };
    int main()
    {
    B aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;
    };



