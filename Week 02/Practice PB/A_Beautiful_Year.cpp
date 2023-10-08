#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n < 9300)
    {
        n++;
        string s = to_string(n);
        vector<int> v(10,0);
        bool year = true;
        FOR(i,0,s.size())
        {
            int d = s[i] - '0';
            v[d]++;
            if(v[d] > 1)
            {
                year = false;
                break;
            }
        }
        if(year)
        {
            cout << n;
            break;
        }
    }
    
    return 0;
}