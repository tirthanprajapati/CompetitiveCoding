#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main()
{
    fast
    int array[3][3], arrays[3][3] = {1, 1, 1, 1, 1, 1, 1, 1, 1};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];
            if (array[i][j] % 2 == 1)
            {
                arrays[i][j] = 1 - arrays[i][j];
                if (i + 1 < 3)
                {
                    arrays[i + 1][j] = 1 - arrays[i + 1][j];
                }
                if (j + 1 < 3)
                {
                    arrays[i][j + 1] = 1 - arrays[i][j + 1];
                }
                if (i - 1 >= 0)
                {
                    arrays[i - 1][j] = 1 - arrays[i - 1][j];
                }
                if (j - 1 >= 0)
                {
                    arrays[i][j - 1] = 1 - arrays[i][j - 1];
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arrays[i][j];
        }
        cout << "\n";
    }
}
