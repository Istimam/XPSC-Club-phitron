#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int t;
    cin >> t;
    int x = t % 10;
    if(x < 5){
        int tt = (t / 10) * 10;
        cout << 100 - tt << nl;
    }
    else{
        int tt = ((t / 10) * 10) + 10;
        cout << 100 - tt << nl;
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