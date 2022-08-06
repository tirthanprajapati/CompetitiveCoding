#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int check_prime(int a)
{
    int count=0;
    for(int i =1;i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if (count==2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    fast
    int mm,nn,flag=0;
    cin>>nn>>mm;
    for (int i = nn+1; i <mm ; i++)
    {
        if(check_prime(i))
        {
            cout<<"NO";
            return 0;
        }
    }
    if(check_prime(mm))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

} 
