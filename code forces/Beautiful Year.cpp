#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	fast
	int number,first,secon,third,fourt,i=0;
	cin>>number;
	for(i=number+1;;i++)
	{
		int num=i;
		first=num%10;
		num=num/10;
		secon=num%10;
		num=num/10;
		third=num%10;
		num=num/10;
		fourt=num;
		if(first!=secon&&first!=third&&first!=fourt&&secon!=third&&secon!=fourt&&third!=fourt)
		{
			break;
		}
	}
	cout<<i;
} 
