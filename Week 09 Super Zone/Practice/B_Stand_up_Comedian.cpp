#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    // if((a1+a2+a3) == 0){
    //     cout << 1 << nl;
    //     return;
    // }
    if(a1 == 0 && (a2 != 0 || a3 != 0)){
        cout << 1 << nl;
        return;
    }
    int ans = min(a1 + a2, a3 + a1) * 2 + 1;
    cout << min(ans, a1 + a2 + a3 + a4) << nl;
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