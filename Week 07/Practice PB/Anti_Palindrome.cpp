// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// #define nl '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     if((n&1) == 1){
//         cout << "NO" << nl;
//         return;
//     }
//     map<char, int> mp;
//     for(auto ch:s){
//         mp[ch]++;
//         if(mp[ch] > n/2){
//             cout << "NO" << nl;
//             return;
//         }
//     }

//     cout << "YES" << nl;
//     string s1 = "", s2 = "";
//     for(auto x:s){
//         if(mp[x] == 0) continue;
//         ll k = mp[x];
//         mp[x] = 0;
//         ll i = 0;
//         while (i<k && s1.size() < n/2)
//         {
//             s1 += x;
//             i++;
//         }
//         while (i<k)
//         {
//             s2 = x + s2;
//             i++;
//         }
//     }
//     cout << (s1 + s2) << nl;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define sz(yo) (ll)yo.size()

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n & 1)
    {
        cout << "NO" << '\n';
        return;
    }

    priority_queue<pair<ll, char>> pq;
    unordered_map<char, ll> cnt;
    for (char ch : s)
    {
        cnt[ch]++;
    }
    for (auto i : cnt)
    {
        pq.push({i.second, i.first});
    }

    ll l = 0, r = n - 1, nxt = 0;
    vector<char> ans(n);
    while (!pq.empty())
    {
        if (sz(pq) <= 1)
        {
            cout << "NO" << '\n';
            return;
        }
        pair<ll, char> p1, p2;
        p1 = pq.top();
        pq.pop();
        p2 = pq.top();
        pq.pop();
        ans[l] = p1.second;
        ans[r] = p2.second;
        if (p1.first > 1)
        {
            pq.push({ p1.first - 1,p1.second });
        }
        if (p2.first > 1)
        {
            pq.push({ p2.first - 1,p2.second });
        }
        l++, r--;
    }
    cout << "YES" << '\n';
    for (auto val : ans)
    {
        cout << val;
    }
    cout << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    t = 1;
    cin >> t;
    for (ll cs = 1; cs <= t; cs++)
    {
        // cout << "Case #" << cs << ": ";
        solve();
    }
    return 0;
}
