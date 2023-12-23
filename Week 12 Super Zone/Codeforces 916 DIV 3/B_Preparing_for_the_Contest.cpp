#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n,k;
    cin >> n >> k;
    if(k == 0){
        while (n > 0)
        {
            cout << n << ' ';
            n--;
        }
        cout << nl;
        return;
    }
    vector<int> v;
    For(i,1,n-k){
        v.push_back(i);
    }
    reverse(v.begin(), v.end());
    For(i,n-k,n+1){
        cout << i << ' ';
    }
    For(i,0,v.size()){
        cout << v[i] << ' ';
    }
    cout << nl;
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