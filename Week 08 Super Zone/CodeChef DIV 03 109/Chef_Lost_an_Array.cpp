#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n,d;
    cin >> n >> d;
    set<int> s;
    For(i,0,n){
        int x;
        cin >> x;
        s.insert(x);
    }
    For(i,0,n){
        int x;
        cin >> x;
        s.insert(x);
    }
    if(s.size() < n){
        cout << "NO" << nl;
        return;
    }
    for(auto i:s){
        int sec = i;
        for(auto j:s){
            if(abs(sec - j) > d){
                cout << "NO" << nl;
                return;
            }
            sec = j;
        }
        break;
    }
    cout << "YES" << nl;
    for(auto i:s){
        cout << i << ' ';
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