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
    int neg = 0;
    For(i,0,n){
        int x;
        cin >> x;
        if(x == 0){
            cout << 0 << nl;
            return;
        }
        if(x < 0){
            neg++;
        }
    }
    if(neg%2 != 0){
        cout << 0 << nl;
    }
    else{
        cout << 1 << nl;
        cout << 1 << ' ' << 0 << nl;
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