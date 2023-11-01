#include<bits/stdc++.h>
#include <chrono>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
using namespace std;
void solve()
{
    int q, AlarmS, AlarmE;
    cin >> q >> AlarmS >> AlarmE;
    chrono::hours h1(AlarmS);
    chrono::minutes h2(AlarmE);
    vector<pair<int, int>> v;
    while (q--)
    {
        int a1, a2;
        cin >> a1 >> a2;
        v.push_back({a1, a2});
    }
    sort(v.begin(), v.end());

    chrono::hours hh1(v.front().first);
    chrono::minutes hh2(v.front().second);
    auto t1 = h1 + h2;
    auto t2 = hh1 + hh2;
    auto timed = t1 - t2;

    chrono::hours diffHours = chrono::duration_cast<chrono::hours>(timed);
    timed -= diffHours;
    chrono::minutes diffMinutes = chrono::duration_cast<chrono::minutes>(timed);
    timed -= diffMinutes;
    cout << setfill('0') << setw(2) << diffHours.count() << ":" << setw(2) << diffMinutes.count() << setw(2) << endl;
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

