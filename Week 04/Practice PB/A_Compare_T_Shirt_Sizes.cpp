#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    int sz1 = s1.size(), sz2 = s2.size();
    char c1 = s1.back(), c2 = s2.back();
    if(c1 == c2)
    {
        if(sz1 == sz2)
            cout << '=';
        else if(c1 == 'S')
        {
            // if(sz1 > sz2)
            // {
            //     cout << sz1 << '<' << sz2;
            // }
            // else if(sz1 < sz2)
            // {
            //     cout << sz1 << '>' << sz2;
            // }
            cout << (sz1 < sz2 ? '>' : '<');
        }
        else
        {
            // if(sz1 > sz2)
            // {
            //     cout << '>';
            // }
            // else if(sz1 < sz2)
            // {
            //     cout << '<';
            // }
            cout << (sz1 > sz2 ? '>' : '<');
        }
    }
    else
    {
        // if(c1 > c2)
        // {
        //     cout << c1 << '<';
        // }
        // else
        //     cout << c1 << '>';
        cout << (c1 > c2 ? '<' : '>');
    }
    cout << '\n';
    // if(c1 == 'M' || c2 == 'M')
    // {
    //     if(c1 == c2)
    //     {
    //         cout << '=' << '\n';
    //     }
    //     else
    //     {
    //         if((c1 == 'S' && c2 == 'M')  || (c1 == 'M' && c2 == 'L'))
    //         {
    //             cout << '<' << '\n';
    //         }
    //         else
    //         {
    //             cout << '>' << '\n';
    //         }
    //     }
    // }
    // else if((c1 == 'S' && c2 == 'L') || (c1 == 'L' && c2 == 'S'))
    // {
    //     if(c1 == 'S')
    //     {
    //         cout << '<' << '\n';
    //     }
    //     else
    //     {
    //         cout << '>' << '\n';
    //     }
    // }
    // else
    // {
    //     if((c1 == 'S' && c2 == 'S'))
    //     {
    //         if(sz1 > sz2)
    //         {
    //             cout << '<' << '\n';
    //         }
    //         else if(sz1 < sz2)
    //         {
    //             cout << '>' << '\n';
    //         }
    //         else
    //             cout << '=' << '\n';
    //     }
    //     else
    //     {
    //         if(sz1 > sz2)
    //         {
    //             cout << '>' << '\n';
    //         }
    //         else if(sz1 < sz2)
    //         {
    //             cout << '<' << '\n';
    //         }
    //         else
    //             cout << '=' << '\n';
    //     }

    // }
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