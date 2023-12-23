#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    bool ok = true;
    int j = 0;
    For(i,0,n){
        if(s[i] == '0'){
            ok = false;
            cout << "NO" << nl;
        }
        else if(s[i] == '1' && i < n-1){
            if(ok){
                cout << "IDK" << nl;
            }
            else{
                cout << "NO" << nl;
            }
            // cout << "IDK" << nl;
        }
        else if(s[i] == '1' && i == n-1){
            if(ok){
                cout << "YES" << nl;
            }
            else{
                cout << "NO" << nl;
            }
        }
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