#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    FOR(i,0,n)
    {
        cin >> a[i];
    }
    int i = 0, j = 0;
    queue<int> q;
    while (j < n)
    {
        if(a[j] < 0)
        {
            q.push(a[j]);
        }
        if(j >= k-1)
        {
            if(q.size())
            {
                cout << q.front()<<" ";
            }
            else
            {
                cout << 0<<" ";
            }
            if(a[i] < 0)
            {
                q.pop();
            }
            i++;
        }
        vector<long long> v;
        v.push_back(j);
        j++;
    }
    return 0;
}