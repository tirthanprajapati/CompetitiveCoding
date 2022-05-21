#include <iostream>
using namespace std;


int main() {
    int test;
    cin>>test;
    while(test--)
    {
        int count,temper=0,b=4;
        cin>>count;
        while(b--)
        {
            int xx;
            cin>>xx;
            if(xx>temper)
            {
                temper=xx;
            }
        }
        cout<<temper<<endl;
    }
    return 0;
}