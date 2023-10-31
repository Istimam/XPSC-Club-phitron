#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int i = 1, j = 0, box = n;
    vector<int> v;
    while (true)
    {
        int x = i + j;
            // cout << box << ' ' << i << ' ' << k - x << '\n';
        if((box-1) <= (k-x) && (box-1) >= 0)
        {
            // cout << box << ' ' << i << ' ' << k - x << '\n';
            // if(x <= k)
            // {
                v.push_back(i + j); 
                i = i + j;
                box--;
                j++;
            // }
        }
        else
        break;
    }
    while (box > 0)
    {
        v.push_back(i + 1);
        i++;
        box--;
    }
        for (auto i : v)
        cout << i << ' ';
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