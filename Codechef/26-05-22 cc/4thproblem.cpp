#include <iostream>
#include<vector>
using namespace std;

int main() {
    int time;
    cin>>time;
    while(time--)
    {
        int item,cost_price,coup_discount;
        int price_orig=0;
        int dis=0;
        cin>>item>>cost_price>>coup_discount;
        int A[item];
        for(int i=0;i<item;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<item;i++)
        {
            price_orig+=A[i];
            if(A[i]<coup_discount)
            {
                A[i]=0;
            }
            else A[i]-=coup_discount;
            dis+=A[i];
        }
        if(price_orig>dis+cost_price)
        {
            cout<<"COUPON"<<endl;
        }
        else cout<<"NO COUPON"<<endl;
    }
    
    return 0;
}