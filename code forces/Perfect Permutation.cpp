#include <iostream>
#include <string>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long

int main()
{
    fast
    int a[100]={0};
    int c=0,i;
    for(i=2;i<=100;i=i+2)
    {
        a[c]=i;
        c=c+2;
    }
    c=1;
    for(i=1;i<=100;i=i+2)
    {
        a[c]=i;
        c=c+2;
    }
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<-1;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
} 
