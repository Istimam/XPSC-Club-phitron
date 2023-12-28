#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s, sk;
    cin >> s >> sk;
    int j = 0, i = 0, cnt = INT_MAX;
    string x;
    while (j<=n-k)
    {
        int sum = 0;
        For(i,0,k){
            int c1 = s[i + j] - '0';
            int c2 = sk[i] - '0';
            // cout << c1 << ' ' << c2 << nl;
            
            int dif1 = abs(c2 - c1);
            if(dif1>5){
                dif1 = 10 - dif1;
            }
            sum += dif1;
            // cout << dif1 << ' ' << dif2 << nl;
            // cout << min(dif1, dif2) << nl;
        }
        // cout << nl;
        cnt = min(cnt, sum);
        // cout << cnt << nl;
        j++;
    }
    cout << cnt << nl;
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