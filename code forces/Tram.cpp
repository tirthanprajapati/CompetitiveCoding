#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    fast
    int time;
    cin>>time;
    int max=0,sum=0,a,b;
    while(time--)
    {
        cin>>a>>b;
        sum-=a;
        sum+=b;
        if(sum>max)
        {
            max=sum;
        }
    }
    cout<<max;
} 
