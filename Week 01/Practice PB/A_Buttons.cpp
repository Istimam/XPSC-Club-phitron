#include<bits/stdc++.h>
#define FOR(i,a,b) for(int i = (a); i < (b); i++)
using namespace std;
int main()
{
    int a,b;
    cin >> a >> b;
    if(a == b)
    {
        cout << a + b << endl;
    }
    else
    {
        int mx = max(a, b);
        cout << mx + (mx - 1) << endl;
    }
    return 0;
}