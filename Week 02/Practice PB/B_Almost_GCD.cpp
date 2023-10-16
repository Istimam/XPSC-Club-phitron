#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    FOR(i,0,n)
    {
        cin >> a[i];
    }
    pair<int, int> pp = {0, 0};
    FOR(i,2,1001)
    {
        int cnt = 0;
        FOR(j,0,n)
        {
            if((a[j]% i == 0))
            {
                cnt++;
            }
        }
        if(pp.second < cnt)
        {
            pp.second = cnt;
            pp.first = i;
        }
    }
    cout << pp.first;
    return 0;
}
