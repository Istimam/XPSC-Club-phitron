#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int i = 1, j = n;
    while (i<j)
    {
        cout << i << ' ' << j << ' ';
        i++;
        j--;
    }
    if(n&1)
    {
        cout << n / 2 + 1;
    }
    cout << nl;
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