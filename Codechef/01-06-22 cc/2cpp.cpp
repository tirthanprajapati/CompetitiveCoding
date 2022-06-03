#include <iostream>
using namespace std;

int main() {
    int time;
    cin>>time;
    while(time--)
    {
        int ax,by,cz;
        cin>>ax>>by>>cz;
        int tm=ax*5+(by*10);
        cout<<(tm/cz)<<endl;
    }
    return 0;
}