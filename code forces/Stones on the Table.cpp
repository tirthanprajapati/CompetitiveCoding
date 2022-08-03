#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    fast
    int number=0,count=0;
    string s="";
    cin>>number;
    cin>>s;
    for(int i=0;i<number-1;i++)
    {
        if (s.at(i)==s.at(i+1))
        {
            count=count+1;
        }
    }
    cout<<count;
} 
