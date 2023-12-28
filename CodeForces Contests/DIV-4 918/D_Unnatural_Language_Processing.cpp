#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    reverse(s.begin(), s.end());
    string ans = "";
    For(i,0,n){
        if(isVowel(s[i])){
            ans += s[i];
            ans += s[i + 1];
            ans += ".";
            i++;
        }
        else{
            ans += s[i];
            ans += s[i+1];
            ans += s[i+2];
            ans += ".";
            i += 2;
        }
    }
    ans.pop_back();
    reverse(ans.begin(), ans.end());
    cout << ans << nl;
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