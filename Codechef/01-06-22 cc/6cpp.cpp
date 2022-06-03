#include<iostream>
using namespace std;
#define ll long long

bool check(long long n)
{
    return n&1;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(b==1)
        {
            if(check(a))
            {
                cout<<"ODD"<<endl;
            }
            else
            {
                cout<<"EVEN"<<endl;
            }
        }
        else if(b==2)
        {
            cout<<"ODD"<<endl;
        }
        else
        {
            cout<<"EVEN"<<endl;
        }
    }
    return 0;
}