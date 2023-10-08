#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int s, t;
    cin >> s >> t;
    int cnt = 0;
    FOR(i,0,101)
    {
        FOR(j,0,101)
        {
            FOR(k,0,101)
            {
                if(i+j+k <= s && i*j*k <= t)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt;
    return 0;
}