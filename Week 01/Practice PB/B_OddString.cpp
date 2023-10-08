#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    string a;
    for (int i = 0; i < s.size(); i += 2)
    {
        a += s[i];
    }
    cout << a;
    return 0;
}