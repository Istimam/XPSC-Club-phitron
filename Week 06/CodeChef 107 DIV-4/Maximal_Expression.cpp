#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    pair<ll, int> p = {INT_MIN, 0};
    // For(i,0,500000010)
    // {
    //     if(p.first < sum)
    //     {
    //         p.first = sum;
    //         p.second = i;
    //     }
    // }
    ll x = n / 2;
    if(n%2 == 0)
    {
        // ll sum = (x % k) * ((n - x) % k);
        cout << x << nl;
    }
    else
    {
        // x++;
        // ll sum = (x % k) * ((n - x) % k);
        cout << x-1 << nl;

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