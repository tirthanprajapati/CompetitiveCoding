#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
	fast
	int total_Num=0,ttime=0;
	string s;
	cin>>total_Num>>ttime;
	cin>>s;
	string array_Order[total_Num]={""};
	for (int i = 0; i < total_Num; i++)
	{
		array_Order[i]=s.at(i);
	}
	for (int i = 1; i <=ttime; i++)
	{
		for(int j = 0;j<total_Num-1 ;j++)
		{
			if(array_Order[j]=="B"&&array_Order[j+1]=="G")
			{
				string temp;
				temp=array_Order[j];
				array_Order[j]=array_Order[j+1];
				array_Order[j+1]=temp;
				j=j+1;
			}
		}
	}
	for (int i = 0; i < total_Num; i++)
	{
		cout<<array_Order[i];
	}
} 
