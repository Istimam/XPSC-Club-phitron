#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sum = 0;
        FOR(i,0,3)
        {
            sum += s[i] - '0';
        }
        int sum2 = 0;
        FOR(i,3,6)
        {
            sum2 += s[i] - '0';
        }
        if(sum == sum2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

    return 0;
}