#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool arr[28] = {false};
    FOR(i,0,s.size())
    {
        if(!arr[(s[i] - 'a')])
        {
            arr[(s[i] - 'a')] = true;
        }
    }
    FOR(i,0,26)
    {
        if(!arr[i])
        {
            char c = i + 'a';
            cout << c;
            return 0;
        }
    }
    cout << "None";
    return 0;
}