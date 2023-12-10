#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    bool srt = is_sorted(v.begin(), v.end());
    // cout << srt << nl;
    if(srt){
        cout << 0 << nl;
    }
    else{
        auto it = min_element(v.begin(), v.end());
        bool issrt = is_sorted(it, v.end());
        if(issrt){
            // cout << "Y" << nl;
        cout << distance(v.begin(), it) << nl;

        }
        else
        cout << -1 << nl;
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