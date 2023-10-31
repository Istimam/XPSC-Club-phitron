#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n, d;
    cin >> n >> d;
    vector<int> T1(n), T2(n);
    For(i,0,n)
    {
        cin >> T1[i];
    }
    For(i,0,n)
    {
        cin >> T2[i];
    }
    vector<int> s1 = T1;
    vector<int> s2 = T2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    vector<pair<int, int>> vp;
    For(i,0,n)
    {
        vp.push_back({s1[i], s2[i]});
    }
    for (const pair<int, int>& p : vp) {
        cout << p.first << " " << p.second << endl;
    }
    /*Another Approach*/
    // vector<int> st1 = T1;
    // sort(st1.begin(), st1.end());
    // sort(T2.begin(), T2.end());
    // multimap<int, int> ump;
    // For(i,0,n)
    // {
    //     ump.insert({st1[i], i});
    // }
    // For(i,0,n)
    // {
    //     auto fnd = ump.find(T1[i]);
    //     int x = fnd->second;
    //     cout << T2[x] << ' ';
    //     ump.erase(fnd);
    // }
    // cout << '\n';

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