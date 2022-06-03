#include <iostream>
using namespace std;

int main() {
    int time;
    cin>>time;
    while(time--)
    {
        int aaa,ppp,bbb,qqq;
        cin>>aaa>>ppp>>bbb>>qqq;
        if((ppp>aaa?ppp:aaa)<(bbb>qqq?bbb:qqq))
        {
            cout<<"p"<<endl;
        }
        else if((ppp>aaa?ppp:aaa)>(bbb>qqq?bbb:qqq))
        {
            cout<<"q"<<endl;
        }
        else cout<<"TIE"<<endl;
    }
    return 0;
}