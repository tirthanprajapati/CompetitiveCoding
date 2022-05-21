#include <iostream>
#include<vector>
using namespace std;

int main() {
    int time;
    cin>>time;
    while(time--)
    {
        int count,coeff=0;
        cin>>count;
            vector<int> vect;
            while(count--)
            {
                int a;
                cin>>a;
                vect.push_back(a);
            }
            for(int i=0;i<vect.size();i++)
            {
                if(vect[i]==0)
                {
                    continue;
                }
                else coeff=i;
            }
            cout<<coeff<<endl;
    }
    return 0;
}