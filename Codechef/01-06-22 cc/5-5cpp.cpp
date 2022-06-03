#include <bits/stdc++.h>
using namespace std;

#define ll long long int

 
int main() {
    ll t;
    cin>>t;
    while(t--) {  
        int n, k;
    cin>>n>>k;
    if(n%2 != 0 && k%2 == 0) {
        cout<<"No\n";
    } 
    else {
        cout<<"Yes\n";
    }
    }
    return 0;
}