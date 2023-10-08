#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int zero = 4-s.size();
    while (zero--)
    {
        cout << 0;
    }
    cout << s;
    return 0;
}