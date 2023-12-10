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
    string s;
    cin >> s;
    int hash = 0;
    int dot = 0;
    int cnt = 0;
    for(auto i:s){
        if(i == '.'){
            dot++;
            cnt++;
            if(dot >= 3){
                cout << 2 << nl;
                return;
            }
        }
        else
        {
            dot = 0;
            hash++;
        }
    }
    // cout << hash <<" "<< n << nl;
    if(hash == n){
        cout << 0 << nl;
        return;
    }
    cout << cnt << nl;
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