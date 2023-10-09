#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
string sortString(string str)
{
    sort(str.begin(), str.end());
    return str;
}
int main()
{
    int t;
    cin >> t;
    string name = "Timur";
    while (t--)
    {
        int l;
        cin >> l;
        string s;
        cin >> s;
        if(l == 5)
        {
            if(sortString(s) == sortString(name))
            {
                cout << "YES" << '\n';
            }
            else
            {
                cout << "NO" << '\n';
            }
        }
        else
        {
            cout << "NO" << '\n';
        }
    }
    
    return 0;
}

