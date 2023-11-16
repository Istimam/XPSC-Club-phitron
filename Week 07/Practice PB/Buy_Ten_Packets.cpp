#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    int t1 = 5 * a;
    int t2 = (3 * a) + b;
    int t3 = min((2 * b) + a, t2);
    if(t1<=t3){
        cout << t1 << nl;
    }
    else{
        cout << t3 << nl;
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