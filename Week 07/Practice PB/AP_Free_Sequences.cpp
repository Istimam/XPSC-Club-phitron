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
    unordered_set<int> s;
    For(i,0,n){
        cin >> v[i];
        s.insert(v[i]);
    }
    For(i,0,n){
        For(j,i+1,n){
            int dif = v[j] - v[i];
            if(s.find(v[j]+ dif) != s.end()){
                cout << "NO" << nl;
                return;
            }
        }
    }
    cout << "YES" << nl;
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