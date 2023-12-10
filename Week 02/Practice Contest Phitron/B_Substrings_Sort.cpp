#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = n;
    vector<string> v(n);
    For(i, 0, n) cin >> v[i];
    sort(v.begin(), v.end(), [](string &a, string &b)
         { return a.size() < b.size(); });
    string s = v[0];
    For(i, 1, n){
        if(v[i].find(s) == -1){
            cout << "NO" << nl;
            return 0;
        }
        s = v[i];
    }
    cout << "YES" << nl;
    for(auto i:v){
        cout << i << nl;
    }
    return 0;
}
