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
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];
    int sum = 0;
    int zero = 0;
    int mn = 0;
    For(i,0,n){
        if(s[i] == '1'){
            mn = INT_MAX;
            int j = i;
            while (j < n)
            {
                if(s[j] == '1'){
                    mn = min(v[j], mn);
                    sum += v[j];
                    j++;
                }
                else{
                    break;
                }
            }
            if(mn < zero){
                sum -= mn;
                sum += zero;
            }
            i = j - 1;
        }
        else
            zero = v[i];
    }
    cout << sum << nl;
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