#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> v;
    FOR(i,0,n)
    {
        int x;
        cin >> x;
        if(s != x)
        {
            v.push_back(x);
        }
    }
    FOR(i,0,v.size())
    {
        cout << v[i] << " ";
    }
    return 0;
}