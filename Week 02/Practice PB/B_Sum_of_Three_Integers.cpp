// #include<bits/stdc++.h>
// #define FOR(i,A,b) for(int i = (A); i < (b); i++)
// using namespace std;
// int main()
// {
//     int k, s;
//     cin >> k >> s;
//     int cnt = 0;
//     FOR(x,0,k+1)
//     {
//         FOR(y,0,k+1)
//         {
//             FOR(z,0,k+1)
//             {
//                 if(x+y+z == s)
//                 {
//                     cnt++;
//                 }
//             }
//         }
//     }
//     cout << cnt;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int x = 0; x <= k; x++) 
    {
        for (int y = 0; y <= k; y++) 
        {
            int z = s - x - y;
            if (z >= 0 && z <= k) 
            {
                cnt++;
            }
        }
    }
    cout << cnt;
    return 0;
}
