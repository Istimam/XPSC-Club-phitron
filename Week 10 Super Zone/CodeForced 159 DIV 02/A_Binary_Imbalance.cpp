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
    int zero = 0, one = 0;
    For(i,0,n){
        if(s[i] == '0'){
            zero++;
        }
        else{
            one++;
        }
    }
    if(n == one){
        cout << "NO" << nl;
    }
    else{
        cout << "YES" << nl;
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