#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int main()
{
    fast
    ll time;
    cin>>time;
    ll arary[time]={0};
    double sum=0.0;
    for(int i=0;i<time;i++)
    {
        cin>>arary[i];
        sum=sum+arary[i];
    }
    sum=sum/time;
    cout<<setprecision(12)<<sum;
} 
