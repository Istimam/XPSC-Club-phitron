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
        unordered_map<int, int> count;
        FOR(i,0,n)
        {
            cin >> v[i];
            count[v[i]]++;
        }
        int result = -1;
        for(auto it:count)
        {
            if(it.second>=3)
            {
                result = it.first;
                break;
            }
        }
        cout << result << endl;
    }
    return 0;
}