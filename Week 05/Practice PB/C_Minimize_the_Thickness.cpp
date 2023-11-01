#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    vector<int> psum(n);
    int sum = 0;
    For(i,0,n)
    {
        cin >> v[i];
        sum += v[i];
        psum[i] = sum;
    }

    For(i,0,n)
    {
        vector<int> seg;
        For(j,i+1,n)
        {

        }
    }
    for (auto i:psum)
        cout << i << nl;
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