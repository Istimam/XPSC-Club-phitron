#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int cnt = 0;
    FOR(i, 0, s.size())
    {
        if(s[i] != t[i])
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}