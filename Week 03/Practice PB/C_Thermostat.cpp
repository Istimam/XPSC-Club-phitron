#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int l, r, x, a, b;
    cin >> l >> r >> x >> a >> b;
    if(a == b){
        cout << 0 << nl;
        return;
    }
    if(abs(a-b) >= x){
        cout << 1 << nl;
        return;
    }
    if(a < b){
        if(b+x <= r || a-x >= l){
            cout << 2 << nl;
        }
        else if (a+x <= r && b - l >= x){
            cout << 3 << nl;
        }
        else{
            cout << -1 << nl;
        }
    }
    else{
        if(a+x <= r || b-x >= l){
            cout << 2 << nl;
        }
        else if (a-x >= l && r - b >= x){
            cout << 3 << nl;
        }
        else
        {
            cout << -1 << nl;
        }
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