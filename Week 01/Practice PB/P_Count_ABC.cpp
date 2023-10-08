#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    string aa;
    cin >> aa;
    string sub = "ABC";
    int pos = aa.find(sub);
    int cnt = 0;
    while (pos != -1)
    {
        cnt++;
        aa.erase(pos, sub.length());
        pos = aa.find(sub, pos);
    }
    cout << cnt;
    return 0;
}