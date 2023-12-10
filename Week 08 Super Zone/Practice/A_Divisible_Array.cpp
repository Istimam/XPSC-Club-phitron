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
    if((n&1) == 0){
        int x = 2;
        For(i,0,n){
            cout << x << ' ';
            x += 2;
        }
        cout << nl;
    }
    else{
        For(i,1,n+1){
            cout << i << ' ';
        }
        cout << nl;
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