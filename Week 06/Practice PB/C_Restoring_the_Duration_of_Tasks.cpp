#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v1(n), v2(n);
    For(i,0,n)
    {
        cin >> v1[i];
    }
    For(i,0,n)
    {
        cin >> v2[i];
    }
    vector<int> ans;
    int sum = v2[0] - v1[0];
    ans.push_back(sum);
    For(i,1,n)
    {
        if(v1[i] < v2[i-1])
        {
            v1[i] = v2[i - 1];
        }
        sum = v2[i] - v1[i];
        ans.push_back(sum);
    }
    for(auto i:ans)
        cout << i << ' ';
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