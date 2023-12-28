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
    int x = 0;
    For(i,0,n){
        int v;
        cin >> v;
        x ^= v;
    }
    if(n%2 == 0){
        if(x == 0){
            cout << 0 << nl;
        }
        else{
            cout << -1 << nl;
        }
    }
    else{
        cout << x << nl;
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