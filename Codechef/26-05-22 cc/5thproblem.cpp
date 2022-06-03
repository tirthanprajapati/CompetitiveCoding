#include <iostream>
using namespace std;
int main() {
    int time;
    cin>>time;
    while(time--)
    {
        int N;
        cin>>N;
        int count=0,temp=0;
        int i=1;
        while(N>1)
        {
            if(N==1||N==2||N==3)
            {
                break;
            } 
            if(temp!=3&&N>3)
            {
                count=count+1;
                N=N-3;
                temp=3;
            }
            if(temp!=2&&N>2)
            {
                count=count+1;
                N=N-2;
                temp=2;
            }
            if (temp!=1&&N>=1)
            {
                count=count+1;
                N=N-1;
                temp=1;
            }
        }
        if(N==1)
        {
            cout<<count<<endl;
        }
        else if(N==2||N==3)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
    return 0;
}