#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int solve()
{
        int arr [8][8];
        FOR(i,0,8)
        {
            FOR(j,0,8)
            {
                char c;
                cin >> c;
                if(c == '.')
                {
                    arr[i][j] = 0;
                }
                else
                {
                    arr[i][j] = 1;
                }
            }
        }
        FOR(i,0,8)
        {
            FOR(j,0,8)
            {
                if(arr[i][j] == 1)
                {
                    if(arr[i][j+2] == 1)
                    {
                        cout << i + 2 << " " << j + 2 << '\n';
                        return 0;
                    }
                }
            }
        }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}