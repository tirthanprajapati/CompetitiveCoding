#include <iostream>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main()
{
    fast
    int t = 0;
    cin >> t;
    while (t--)
    {
        int n = 0, k = 0;
        int sum = 0;
        cin >> n >> k;
        int A[n][n];
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                A[i][j] = (i + n * (j - 1));
            }
        }

        if (n%2==0&&k==0||n%2!=0&&k==1)
        {
            

            for (int i = 1; i <= n; i++)
            {
                for (int j = i; j <= i + 1; j++)
                {
                   
                    if (i == n)
                    {

                        sum += A[i][j];
                        break;
                    }
                    sum += A[i][j];
                }
            }
            
        }
        else
        {
            
            for (int j = 1; j <= n; j++)
            {
                for (int i = j; i <= j + 1; i++)
                {
                    
                    if (j == n)
                    {

                        sum += A[i][j];
                        break;
                    }
                    sum += A[i][j];
                }
            }
            
        }

        if (sum % 2 == 0 && k == 0 || sum % 2 != 0 && k == 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
}