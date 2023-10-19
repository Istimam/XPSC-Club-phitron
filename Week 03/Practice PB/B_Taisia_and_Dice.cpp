#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n, s, k;
    cin >> n >> s >> k;
    n--;
    int Maxdice = s - k;
    vector<int> vs;
    vs.push_back(Maxdice);
    int i = Maxdice;
    while (k > 0)
    {
        int e = k - i;
        int x = n - 1;
        if(e >= x)
        {
            vs.push_back(i);
            k -= i;
            n--;
        }
        else
            i--;
    }
    for(auto i:vs)
        cout << i << " ";
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