#include <iostream>
#include<vector>
using namespace std;

int main() {
    int time;
    cin>>time;
    while(time--)
    {
        vector<int> v1;
        vector<int> v2;
        int c;
        cin>>c;
        int count=0;
        for(int i=0;i<c;i++)
        {
            int a;
            cin>>a;
            v1.pushback(a);
        }
        for(int i=0;i<c;i++)
        {
            int a;
            cin>>a;
            v2.pushback(a);
        }
        for(int i=0;i<c;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(i==j)
                {
                    continue;
                }
                int x,y;
                x=v1(i)^v1(j);
                y=v2(i)^v2(j);
                if(x==y);
                cout=count+1;
            }
        }
    }    
    return 0;
}