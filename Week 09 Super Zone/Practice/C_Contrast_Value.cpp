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
    vector<int> v;
    For(i, 0, n){
        int x;
        cin >> x;
        if(i > 0 && x == v.back() ){
            v.push_back(x);
            v.pop_back();
        }
        else{
            v.push_back(x);
        }
    }
    if(v.size() == 1){
        cout << 1 << nl;
        return;
    }
    int cnt = 2;
    For(i,1,v.size()-1){
        if((v[i] > v[i-1] && v[i] > v[i+1]) || v[i] < v[i-1] && v[i] < v[i+1]){
            cnt++;
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