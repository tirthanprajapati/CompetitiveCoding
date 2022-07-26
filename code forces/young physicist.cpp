
#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int main()
{
	fast
	int time;
	cin>>time;
	int i=0,j=0,k=0,l,m,n;
	while(time--)
	{
		cin>>l>>m>>n;
		i=i+l;
		j=j+m;
		k=k+n;
	}
	if (i==0&&j==0&&k==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
} 
