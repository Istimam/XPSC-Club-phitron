#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, L, S;
    cin >> n >> L >> S;
    if(L < n || (n == L && S < 3*n)){
        cout << "NO" << nl;
        return;
    }
    int p = S / 3;
    int req = n - p;
    L -= p;
    if(L < 2*req){
        cout << "NO" << nl;
        return;
    }
    cout << "YES" << nl;
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