#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    vector<string> v = {"+88017", "+88013", "+88014", "+88015", "+88018", "+88019"};
    if(s.size() == 14){
        string x = s.substr(0, 6);
        bool ans = false;
        for(auto ss:v){
            if(ss == x){
                ans = true;
                break;
            }
        }
        For(j,6,s.size()){
            if(s[j] > '9' || s[j] < '0')
                {
                    ans = false;
                    break;
                }
        }
        if(ans){
            cout << "YES" << nl;
            return;
        }
    }
        cout << "NO" << nl;
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