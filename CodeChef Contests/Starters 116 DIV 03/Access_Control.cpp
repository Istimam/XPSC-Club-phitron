#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, k;
    string s;
    cin >> n >> k >> s;
    int cnt = 0;
    For(i,0,n){
        if(s[i] == '0'){
            cnt--;
            if(cnt < 0){
                cout << "NO" << NL;
                return;
            }
        }
        else{
            cnt = k;
        }
    }
    cout << "YES" << NL;
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