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
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if(v[i] < vv[j]){
            ans.push_back(v[i]);
            i++;
        }
        else{
            ans.push_back(vv[j]);
            j++;
        }
    }
    while (i < n)
    {
        ans.push_back(v[i]);
        i++;
    }
    while (j < m)
    {
        ans.push_back(vv[j]);
        j++;
    }
    
    for(auto i:ans)
        cout << i << ' ';
    cout << nl;
    return 0;
}