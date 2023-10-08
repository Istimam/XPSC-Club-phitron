#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        map<int, int> numCount;
        FOR(i,0,x)
        {
            int n;
            cin >> n;
            numCount[n]++;
        }
        bool isTrue = false;
        for(auto pair: numCount)
        {
            int cnt = pair.second;
            if(cnt >= 3)
            {
                cout << pair.first << '\n';
                isTrue = true;
                break;
            }
        }
        if(!isTrue)
        {
            cout << -1 << '\n';
        }
    }
    return 0;
}