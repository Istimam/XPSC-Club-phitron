#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll sum = n;
    while (n != 0)
    {
        sum += n / 2;
        n = n / 2;
    }
    cout << sum << '\n';
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