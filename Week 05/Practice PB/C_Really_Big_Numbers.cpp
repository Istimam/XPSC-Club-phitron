#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
int main()
{
    ll n, s;
    cin >> n >> s;
    ll l = 0, r = n, xxx = __LONG_LONG_MAX__;
    while (l<=r)
    {
        ll mid = l + (r - l) / 2;
        ll digits = mid, sum = 0;
        while (digits != 0)
        {
            sum += digits % 10;
            digits /= 10;
        }
        ll cmp = mid - sum;
        // mid -= sum;
        if(cmp >= s)
        {
            xxx = min(mid, xxx);
            r = mid - 1;
            l = 0;
        }
        else
        {
            l = mid + 1;
        }
    }
    if(xxx == __LONG_LONG_MAX__)
    {
        cout << 0 << nl;
    }
    else
        cout << (n - xxx) + 1 << nl;
    return 0;
}