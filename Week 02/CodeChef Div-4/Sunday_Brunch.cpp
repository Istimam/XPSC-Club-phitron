#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, e;
        cin >> p >> e;
        int remain = p / e;
        if(remain > 20)
        {
            cout << 20 << '\n';
        }
        else
        {
            cout << remain << '\n';
        }
    }
    
    return 0;
}