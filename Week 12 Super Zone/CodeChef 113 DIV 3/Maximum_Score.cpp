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
    int zero = 0, one = 0;
    For(i,0,n){
        int x;
        cin >> x;
        if(x == 0)
            zero++;
        else
            one++;
    }
    cout << min(n / 2, min(one, zero)) << nl;
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