// #include<bits/stdc++.h>
// #define FOR(i,A,b) for(int i = (A); i < (b); i++)
// using namespace std;
// int cnt = 0;
// int magic(int x)
// {
//     cnt++;
//     vector<int> v;
//     while (true)
//     {
//         int t = x % 10;
//         v.push_back(t); 
//         // cout << t << '\n';
//         if(x/10 == 0)
//         {
//             // s += t;
//             break;
//         }
//         x = x / 10;
//     }
//     int s = 0;
//     for(auto i:v)
//     {
//         s += i;
//         // cout << i << " ";
//     }
//     return s;
// }
// int main()
// {
//     int x;
//     cin >> x;
//     if(x < 10)
//     {
//         cout << 0;
//     }
//     else
//     {
//         int s = magic(x);
//         while (true)
//         {
//             // cout << s << " ";
//             if(s < 10)
//             {
//                 break;
//             }
//             s = magic(s);
//         }
//         cout << cnt;
//         return 0;
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string n;
    cin >> n;
    int cnt = 0;
    while (n.size() > 1) 
    {
        int sum = 0;
        for (char digit : n) 
        {
            sum += digit - '0';
        }
        n = to_string(sum); 
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
