#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n, c;
    cin >> n >> c;
    int ans = n * c;
    string s = to_string(ans);
    if(s.size() == 5)
    {
        if(s[0] != '0')
        {
            cout << "YES" << '\n';
        }
        else
            cout << "NO" << '\n';
    }
    else
            cout << "NO" << '\n';

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