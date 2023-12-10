#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
bool isSame(string s)
{
    For(i,1,s.size()){
        if(s[i] != s[i-1]){
            return false;
        }
    }
    return true;
}
void solve()
{
    // int n;
    string n;
    cin >> n;
    int cnt = 0;
    bool ok = false;
    For(i,1,10){
        int j = 4;
        string xxx = to_string(i);
        char c = xxx[0];
        // cout << c << nl;
        string s;
        while (j--)
        {
            s += c;
            int x = stoi(s);
            cnt += s.size();
            // cout << s << nl;
            if(s == n){
                ok = true;
                break;
            }
        }
        if(ok){
            break;
        }
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