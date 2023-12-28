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
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int mx = v[n - 1], mx2 = INT_MIN;
    map<int, int> mp;
    for (int i = 1; i*i <= mx; i++)
    {
        if(mx%i == 0){
            mp[i]++;
            if((mx/i) != i){
                mp[mx/i]++;
            }
        }
    }
    For(i,0,n){
        if(mp[v[i]] >= 1){
            mp[v[i]]--;
            v[i] = 0;
        }
    }
    mx2 = *max_element(v.begin(), v.end());
    cout << mx << ' ' << mx2 << nl;
    return 0;
}