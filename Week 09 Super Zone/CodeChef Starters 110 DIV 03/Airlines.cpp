#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int x, n;
    cin >> x >> n;
    int cap = x * 100;
    if(cap >= n){
        cout << 0 << nl;
        return;
    }
    cap = n / 100;
    if(n%100 == 0){
        cout << cap - x << nl;
    }
    else{
        cout << (cap - x) + 1 << nl;
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