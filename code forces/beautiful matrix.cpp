#include <iostream>
#include <cmath>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	fast
	int i,j;
	for(i=1;i<=5;i++)
	{
		for (j=1;j<=5;j++)
		{
			int n = 0;
			cin>>n;
			if(n!=0)
			{
				cout<<(abs(3-i)+abs(3-j))<<endl;
				break;
			}
		}
	}
} 
