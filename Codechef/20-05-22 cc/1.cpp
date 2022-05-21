#include <iostream>
using namespace std;


int main() {
    {
        int arr[4];
        int c=0;
        for(int i=0;i<4;i++)
        {
            int xx;
            cin>>xx;
            arr[i]=xx;
        }
        for(int i=0;i<4;i++)
        {
            if(arr[i]>=10)
            {
                c++;
            }
        }
        cout<<c;
    }
    return 0;
}