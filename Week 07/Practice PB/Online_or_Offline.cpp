#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    float o, f;
    cin >> o >> f;
    o -= (o * 10) / 100;
    if(o<f){
        cout << "ONLINE" << nl;
    }
    else if(f < o)
        cout << "DINING" << nl;
    else
        cout << "EITHER" << nl;
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