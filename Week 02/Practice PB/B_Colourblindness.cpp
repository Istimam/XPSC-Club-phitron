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
        string s1, s2;
        cin >> s1 >> s2;
        bool isTr = false;
        FOR(i,0,x)
        {
            if((s1[i] == 'R' && s2[i] == 'B') || (s1[i] == 'B' && s2[i] == 'R'))
            {
                cout << "NO" << '\n';
                isTr = true;
                break;
            }
            else if((s1[i] == 'R' && s2[i] == 'G') || (s1[i] == 'G' && s2[i] == 'R'))
            {
                cout << "NO" << '\n';
                isTr = true;
                break;
            }
        }
        if(!isTr)
        {
            cout << "YES" << '\n';
        }
    }
    return 0;
}