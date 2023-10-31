#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int x = n % 3;
    int h1, h2, h3;
    n = n / 3;
    if(x == 2)
    {
        h1 = n + x, h2 = n + 1, h3 = n - 1;
    }
    else
    {
        h1 = (n + x) + 1, h2 = n, h3 = n - 1;
    }
    cout << h2 << ' ' << h1 << ' ' << h3 << '\n';
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