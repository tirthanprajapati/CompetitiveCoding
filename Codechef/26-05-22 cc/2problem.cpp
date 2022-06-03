#include <iostream>
using namespace std;

int main() {
    int time;
    cin>>time;
    for(int i=0;i<time;i++)
    {
    	int ax=0,by=0,cz=0,urm=0;
    	cin>>ax>>by>>cz;
    	urm=(ax-by)*cz;
    	cout<<urm<<endl;
    }
    return 0;
}