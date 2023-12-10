#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
typedef long long ll;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    For(i,0,n)
    {
        cin >> v[i];
    }
    priority_queue<int> pq;
    ll sum = 0;
    for(auto i:v)
    {
        if(i > 0)
        {
            pq.push(i);
        }
        else
        {
            if(!pq.empty())
            {
                sum += pq.top();
                pq.pop();
            }
        }
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