#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    char c;
    string s;
    cin >> n >> c >> s;
    int cnt = 0;
    For(i,0,n){
        if(s[i] != c){
            cnt++;
        }
    }
    if(cnt == 0){
        cout << 0 << nl;
        return;
    }
    For(i,2,n+1){
        bool x = false;
        if(s[i-1] == c){
            for (int j = i; j <= n; j+=i)
            {
                // cout << "j" << ' ' << j << ' ';
                if(s[j-1] != c){
                    x = true;
                    break;
                }
            }
            if(!x){
                cout << 1 << nl << i << nl;
                return;
            }
        }
    }
    cout << 2 << nl << n << ' ' << n - 1 << nl;
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
