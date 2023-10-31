#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    int A = 0, B = 0;
    For(i,0,n)
    {
        char c;
        cin >> c;
        s += c;
        if(c == 'a')
        {
            A++;
        }
        else
            B++;
    }
    // if(A == B)
    // {
    //     cout << 0 << '\n' << s << '\n';
    // }
    // else
    // {
    int cnt = 0;
    for (int i = 0; i < n; i+=2)
    {
        string ss = s.substr(i, 2);
        if(ss == "aa" || ss == "bb")
        {
            cnt++;
            if(s[i] == 'a')
            {
                s[i] = 'b';
            }
            else
                s[i] = 'a';
        }
    }
    cout << cnt << '\n' << s;
    // }
    // cout << A << " " << B << " " << s;
    return 0;
}