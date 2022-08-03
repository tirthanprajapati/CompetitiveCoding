#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    fast
    long long time,c=0;
    cin>>time;
    while(time!=0)
    {
        if(time%10==4||time%10==7)
        {
            c=c+1;
        }
        time=time/10;
    }
    if(c==4||c==7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
} 
