#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        FOR(i,0,n)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        vector<pair<int,int>> v2;
        v2.push_back({v[0], 1});
        FOR(i,1,n)
        {
            pair<int,int>& pp = v2.back();
            int x = pp.first;
            if(v[i] == x)
            {
                pp.second++;
            }
            else
            {
                v2.push_back({v[i], 1});
            }
        }
        int cnt = 0;
        vector<pair<int, int>> delPair;
        for(auto i:v2)
        {
            if(i.second%2 == 0)
            {
                delPair.push_back(i);
                // cnt++;
            }
            else
            {
                i.second = 1;
                cnt++;
            }
            // cout << i.first << " " << i.second << '\n';
        }
        if(delPair.size()%2 == 0)
        {
            cnt += delPair.size();
            cout << cnt << '\n';
        }
        else
        {
            cnt = cnt + delPair.size() - 1;
            cout << cnt << '\n';
        }
    }
    return 0;
}