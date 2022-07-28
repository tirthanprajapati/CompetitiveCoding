#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
int main()
{
	fast
	string ss;
	cin>>ss;
	for(int  i=0;i<ss.length();i++)
	{
		if(ss.at(i)=='.')
		{
			cout<<0;
		}
		else if(ss.at(i)=='-'&&ss.at(i+1)=='.')
		{
			i=i+1;
			cout<<1;
		}
		else
		{
			i=i+1;
			cout<<2;
		}
	}
} 
