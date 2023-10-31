// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// using namespace std;
// void solve()
// {
//     int n;
//     char c;
//     cin >> n >> c;
//     string s;
//     cin >> s;
//     s += s;
//     int passingWindow = 0;
//     for (int i = 0; i < s.size();i++)
//     {
//         if(s[i] == c)
//         {
//             int cnt = 0;
//             while (s[i] != 'g' && i < s.size())
//             {
//                 cnt++;
//                 i++;
//             }
//             passingWindow = max(cnt, passingWindow);
//         }
//     }
//     cout << passingWindow<<'\n';
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        // cout << s << '\n';
        int passingWindow = 0;
        int i = 0, j = 0;
        bool ok = false;
        while (i < s.size())
        {
            if(s[i] == c)
            {
                ok = true;
            }
            if(s[i] == 'g')
            {
            // cout << s[i] << ' ';
                passingWindow = max(passingWindow, j);
                j = 0;
                ok = false;
            }
            if(ok)
            {
                j++;
            }
            // cout << j << '\n';
            i++;
        }
        cout << passingWindow << '\n';
    }
    
    return 0;
}
