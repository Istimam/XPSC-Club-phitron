#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int> v;
    int i = 9;
    while (n!=0)
    {
        int x = n - i;
        if(x >= 0)
        {
            v.push_back(i);
            n = n - i;
        }
        i--;
    }
    sort(v.begin(), v.end());
    for(auto i:v)
    {
        cout << i;
    }
    cout << '\n';
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