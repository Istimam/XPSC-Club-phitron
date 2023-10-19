#include<bits/stdc++.h>
using namespace std;
string ss = "meow";
void solve()
{
    int n;
    cin >> n;
    string arr;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        c = tolower(c);
        arr += c;
    }
    arr += '0';
    string s2;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != arr[i+1])
        {
            // cout << arr[i];
            s2 += arr[i];
        }
    }
    if(s2 == ss)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << '\n';
    }
    // int n;
    // cin >> n;
    // string s;
    // cin >> s;
    // transform(s.begin(), s.end(), s.begin(), [] (char c) {
    //     return tolower(c);
    // });
    // s.erase(unique(s.begin(), s.end()), s.end());
    // cout << (s == "meow" ? "YES" : "NO") << "\n";
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}