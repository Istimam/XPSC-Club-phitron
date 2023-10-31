#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    string arr;
    cin >> arr;
    int sum = 0;
    int j = 1;
    for(auto i:arr)
    {
        int x = i - '0';
        // cout << x<<' ';
        if(x == 0)
        {
            x += 10;
        }
        if(j <= x)
        {
            sum += (x - j) + 1;
            j = x;
        }
        else
        {
            // cout <<j<<' '<< x<<' '<< j - x<<'\n';
            sum += (j - x) + 1;
            j = x;
        }
        // cout << x - j;
        // sum += abs(x - j) + 1;
        // j = x;
    }
    cout << sum << '\n';
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