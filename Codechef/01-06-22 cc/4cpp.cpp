#include <iostream>
using namespace std;

int main()
{
    int time;
    cin>>time;
    while(time--)
    {
        int ax=0,by=0;
        cin>>ax>>by;
        int count=0;
        if(ax>by)
        {
            if(ax%2==0&&by%2==0)
            {
                count=(ax-by)/2;
            }
            else if(ax%2!=0&&by%2==0)
            {
                count=((ax-by)/2)+1;
            }
            else if(ax%2==0&&by%2!=0)
            {
                count=((ax-by)/2)+2;
            }
            else if(ax%2!=0&&by%2!=0)
            {
                count=((ax-by)/2)+1;
            }
            else
            {
                count=0;
            }
        }
        else
        {
            count=by-ax;
        }
        cout<<count<<endl;
    }   
}