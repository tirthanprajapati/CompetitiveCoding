#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int main()
{
    fast
    ll i=0,sum=0,a=0,b=0,c=0,d=0,total=0;
    cin>>a>>b>>c>>d>>total;
    for(i=1;i<=total;i++)
    {
        if(i%a==0)
        {
            sum=sum+1;
        }
        else if(i%b==0)
        {
            sum=sum+1;
        }
        else if(i%c==0)
        {
            sum=sum+1;
        }
        else if(i%d==0)
        {
            sum=sum+1;
        }
    }
    cout<<sum;
}
