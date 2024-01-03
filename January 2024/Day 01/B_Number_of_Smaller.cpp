#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n), vv(m);
    For(i,0,n){
        cin >> v[i];
    }
    For(i,0,m){
        cin >> vv[i];
    }
    int j = 0;
    vector<int> ans;
    For(i,0,m){
        while (v[j] < vv[i] && j < n)
        {
            j++;
        }
        ans.push_back(j);
    }
    for(auto i:ans)
        cout << i << ' ';
    cout << nl;
    return 0;
}