
#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
#define YES cout<< "YES"<<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
string makeLexicographicallySmaller(const string& s) {
    for (size_t i = 0; i < s.length() - 1; ++i) {
        if (s[i] > s[i + 1]) {
            return s.substr(0, i) + s.substr(i + 1);
        }
    }
    return s.substr(0, s.length() - 1);
}
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    string x = makeLexicographicallySmaller(s);
    cout << x << NL;
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