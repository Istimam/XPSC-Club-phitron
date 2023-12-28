#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int bigElement = 0, ans = 0;
    if(n == 2){
        cout << 2 << nl;
        return;
    }
    For(i,1,n+1){
        int sum = 0;
        For(j,1,i+1){
            int mul = j * j;
            sum += mul;
            bigElement = max(mul, bigElement);
        }
        int x = i + 1;
        for (int k = n; k > i; k--)
        {
            int mul = k * x;
            x++;
            bigElement = max(bigElement, mul);
            sum += mul;
        }
        // cout << sum-bigElement << ' ' << bigElement << nl;
        ans = max(ans, sum - bigElement);
    }
    cout << ans << nl;
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