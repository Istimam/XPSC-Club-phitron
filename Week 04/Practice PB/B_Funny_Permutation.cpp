#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n == 3)
    {
        cout << -1 << '\n';
    }
    else if(n%2 == 0)
    {
        for (int i = n; i > 0; i--)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
    else
    {
        int mid = n / 2;
        // int i = n;
        while (mid--)
        {
            cout << n << ' ';
            n--;
        }
        for (int i = 1; i <= n; i++)
        {
            cout << i << ' ';
        }
        cout << '\n';
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