#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    string s = "";
    For(i,0,6){
        char c;
        cin >> c;
        s += c;
    }
    string x = "WWW";
    For(i,0,6){
        int cnt = 0;
        if(s[i] == 'W'){
            For(j,i,6){
                if(s[j] != 'W')
                break;
                cnt++;
            }
        }
        if(cnt >= 3){
            cout << "YES" << NL;
            return;
        }
    }
    cout << "NO" << NL;
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