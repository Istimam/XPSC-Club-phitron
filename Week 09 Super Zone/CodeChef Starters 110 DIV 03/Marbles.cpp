#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int chef, fnd;
    cin >> chef >> fnd;
    if(chef%fnd == 0){
        cout << 0 << nl;
        return;
    }
    int n = chef, m = fnd;
    bool f1 = false, f2 = false;
    int cnt1 = 0;
    while (n > m)
    {
        n--;
        m++;
        cnt1++;
        if(n%m == 0){
            // cout << n << ' ' << m << nl;
            // cout << cnt1 << nl;
            f1 = true;
            break;
        }
    }
    if(!f1){
        cnt1 = INT_MAX;
    }
    int cnt2 = 0;
    while (fnd > 0)
    {
        chef++;
        fnd--;
        cnt2++;
        if(chef%fnd == 0){
            f2 = true;
            break;
        }
    }
    if(!f2){
        cnt2 = INT_MAX;
    }
    cout << min(cnt1, cnt2) << nl;
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