#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int days;
    cin >> days;
    int cnt = days % 7;
    if(cnt >= 2)
    {
        cout << (days / 7) + 1 << '\n';
    }
    else
        cout << days / 7 << '\n';
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