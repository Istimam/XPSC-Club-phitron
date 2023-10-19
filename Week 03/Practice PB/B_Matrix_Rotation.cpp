// #include<bits/stdc++.h>
// using namespace std;
// void solve()
// {
//     int grid[2][2];
//     for (int i = 0; i < 2; i++)
//         for (int j = 0; j < 2; j++)
//             cin >> grid[i][j];

//     int i = 4;
//     bool ok = false;
//     while (i--)
//     {
//         if(grid[0][0] < grid[0][1] && grid[0][0] < grid[1][0] && grid[0][1] < grid[1][1] && grid[1][0] < grid[1][1])
//         {
//             ok = true;
//             break;
//         }
//         int val = grid[0][0];
//         grid[0][0] = grid[1][0];
//         grid[1][0] = grid[1][1];
//         grid[1][1] = grid[0][1];
//         grid[0][1] = val;
//     }
//     if(ok)
//         cout << "YES" << '\n';
//     else
//         cout << "NO" << '\n';
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

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int _ = 0; _ < t; _++)
    {
        vector<int> a(4);
        for(int i = 0; i < 4; i++)
            cin >> a[i];
        int maxpos = max_element(a.begin(), a.end()) - a.begin();
        int minpos = min_element(a.begin(), a.end()) - a.begin();
        if(maxpos + minpos == 3)
            puts("YES");
        else
            puts("NO");
    }
}