#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
#define YES cout<< "YES"<<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    ll h, x, y1, y2, k;
    cin >> h >> x >> y1 >> y2 >> k;
    ll ans1 = 0;
    ans1 = h / x;
    if(h%x != 0){
        ans1++;
    }
    ll ans2 = 0, cnt = 0;
    cnt = y1 * k;
    if(cnt >= h){
        ans2 = h / y1;
        if(h%y1 != 0){
            ans2++;
        }
        cout << min(ans1, ans2) << NL;
        return;
    }
    h -= cnt;
    ans2 = k;
    ans2 += h / y2;
    if(h%y2 != 0){
        ans2++;
    }
    cout << min(ans1, ans2) << NL;
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