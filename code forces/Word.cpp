#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    fast
    string s;
    cin>>s;
    char ch;
    int U=0, L=0;
    char arr[s.length()];
    strcpy(arr, s.c_str());
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<size;i++)
    {
        if(isupper(arr[i]))
        {
            U=U+1;
        }
        else
        {
            L=L+1;
        }
    }
    if(U>L)
    {
        for(int i=0;i<size;i++)
        {
            ch=toupper(arr[i]);
            cout<<ch;
        }
    }
    else
    {
        for(int i=0;i<size;i++)
        {
            ch=tolower(arr[i]);
            cout<<ch;
        }
    }
} 
