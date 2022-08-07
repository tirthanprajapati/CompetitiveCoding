#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    fast
    int size,min=1000,max=0,minpos=0,maxpos=0;
    cin>>size;
    int array[size]={0};
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
        if(array[i]<=min)
        {
            min=array[i];
            minpos=i;
        }
        if(array[i]>max)
        {
            max=array[i];
            maxpos=i;
        }
    }
    int sol=0;
    if(minpos<maxpos)
    {
        sol=((size-minpos)+(maxpos-1))-1;
    }
    else
    {
        sol=((size-minpos)+(maxpos-1));
    }
    cout<<sol;
} 
