#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int p = 0, m = 0;
    For(i,0,n){
        if(s[i] == '-'){
            m++;
        }
        else{
            p++;
        }
    }
    int val = abs(p - m);
    cout << val << NL;
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