#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define ll long long
using namespace std;
void solve()
{
    int cars, power_outlet, hrs;
    cin >> cars >> power_outlet >> hrs;
    vector<int> vcar(cars);
    For(i,0,cars)
    {
        cin >> vcar[i];
    }
    vector<int> vpowr(power_outlet);
    For(i,0,power_outlet)
    {
        cin >> vpowr[i];
    }
    sort(vcar.begin(), vcar.end(), greater<int>());
    sort(vpowr.begin(), vpowr.end(), greater<int>());
    int mn = min(cars, power_outlet);
    ll sumWatt = 0;
    For(i,0,mn)
    {
        sumWatt += min(1ll*vpowr[i] * hrs, 1ll*vcar[i]);
    }
    cout << sumWatt << '\n';
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