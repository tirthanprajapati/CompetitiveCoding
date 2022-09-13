//Solution by OTOMIA CODEX
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
#define int long long
#define fori for(int i=0;i<n;i++)
#define asort_arr sort(arr,arr+size);
#define asort_vect sort(vect.begin(), vect.end());
#define dsort_arr sort(arr,arr+size,greater<int>());
#define dsort_vect sort(vect.begin(), vect.end(),greater<int>());


void solution()
{
        string s; cin >>s;
        int n = s.length();
        if(n > 10){
            cout << s[0] << s.length()-2 << s[n-1] << endl;
        }
        else{
            cout << s << endl;
        }

}


signed main()
{
    fast
    int time;
    cin>>time;
    while(time--)
    {
        solution();    
    }
    return 0;
} 

//Functions
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

bool isPowerOfTwo(int n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

bool isVowel(char &c)
{
  if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') 
  return true;
  else 
  return false;
}
