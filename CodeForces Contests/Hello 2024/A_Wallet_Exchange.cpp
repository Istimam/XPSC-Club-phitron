#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    int mn = min(a, b);
    int mx = max(a, b);
    int x = mx - mn;
    if(x%2 == 0){
        cout << "Bob" << NL;
    }
    else{
        cout << "Alice" << NL;
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