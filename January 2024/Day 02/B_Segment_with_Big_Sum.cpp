#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];
    ll i = 0, j = 0, sum = 0, ans = LONG_MAX;
    while (j < n)
    {
        sum += v[j];
        while (sum >= k)
        {
            ans = min(ans, j - i + 1);
            sum -= v[i];
            i++;
        }
        j++;
    }
    if(ans == LONG_MAX){
        cout << -1 << NL;
    }
    else
        cout << ans << NL;
    return 0;
}