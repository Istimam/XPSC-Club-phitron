#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
#define pp pair<int,int>
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    vector<pp> v(n);
    For(i,0,n){
        int x;
        cin >> x;
        v[i] = {x, i+1};
    }
    sort(v.begin(), v.end(), [](auto &a, auto &b)
         { return a.first > b.first; });
    vector<pp> maxProfit;
    int maxp = 0;
    For(i,0,d){
        maxp += v[i].first;
        maxProfit.push_back(v[i]);
    }
    if(d == 1){
        cout << maxp << nl << n;
        return 0;
    }
    sort(maxProfit.begin(), maxProfit.end(), [](auto &a, auto &b)
         { return a.second < b.second; });
    vector<int> ans;
    ans.push_back(maxProfit[0].second);
    For(i,1,maxProfit.size()-1){
        // cout << maxProfit[i].second << ' ' << maxProfit[i-1].second << nl;
        int sz = maxProfit[i].second - maxProfit[i - 1].second;
        ans.push_back(sz);
    }
    ans.push_back(n - maxProfit[maxProfit.size()-2].second);
    cout << maxp << nl;
    for(auto i:ans)
        cout << i << ' ';
    cout << nl;
    return 0;
}