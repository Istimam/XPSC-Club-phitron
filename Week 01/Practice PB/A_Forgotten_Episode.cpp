#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool arr[n + 1]={false};
    FOR(i,1,n+1)
    {
        int x;
        cin >> x;
        if(!arr[x])
        {
            arr[x] = true;
        }
    }
    FOR(i,1,n+1)
    {
        if(!arr[i])
        {
            cout << i;
        }
    }
    return 0;
}