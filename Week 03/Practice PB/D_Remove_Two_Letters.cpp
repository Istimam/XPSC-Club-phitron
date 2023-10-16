// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     string s;
//     cin >> s;
//     // map<string, int> mp;
//     // vector<string> ss;
//     set<string> ss;
//     for (int i = 0; i < s.size()-1; i++)
//     {
//         string s1;
//         for (int j = 0; j < s.size(); j++)
//         {
//             if(j != i && j != i+1)
//             {
//                 s1 += s[j];
//             }
//         }

//         // if(ss.empty())
//         // {
//         //     ss.push_back(s1);
//         // }
//         // else
//         // {
//         //     bool found = false;
//         //     for(auto k:ss)
//         //     {
//         //         if(k == s1)
//         //         {
//         //             found = true;
//         //             break;
//         //         }
//         //     }
//         //     if(!found)
//         //         ss.push_back(s1);
//         // }
//         // mp[s1]++;
//         if(ss.count(s1) == 0)
//         {
//             ss.insert(s1);
//         }
//     }
//     cout << ss.size() << '\n';
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
#include <bits/stdc++.h>
using namespace std;
void solve() 
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < n - 2; i++) 
    {
        if (s[i] == s[i + 2]) 
        {
            count++;
        }
    }
    int result = n - 1 - count;
    cout << result << '\n';
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
