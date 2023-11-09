#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    vector<int> freq(27,0);
    vector<int> v;
    int sum = 0;
    For(i,0,s.size())
    {
        v.push_back(s[i] - 96);
        freq[s[i] - 96]++;
        sum += s[i] - 96;
    }
    sort(v.begin(), v.end());
    int i = v.size();
    int ss = 0;
    while (sum > n)
    {
        sum -= v.back();
        // cout << v.back() << nl;
        freq[v.back()]--;
        v.pop_back();
    }

    For(i,0,s.size())
    {
        if(freq[s[i]-96] > 0)
        {
            cout << s[i];
            freq[s[i] - 96]--;
        }
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