#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int p, r;
    cin >> p >> r;
    if(r == 0 || p == r || p > r){
        cout << 0 << nl;
    }
    else{
        int dif = (r - p) * 2;
        cout << dif << nl;
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