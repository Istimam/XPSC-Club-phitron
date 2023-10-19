// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string inputString = "aabcd";

//     for (int i = 0; i < inputString.length() - 1; i++) {
//         string resultString = inputString;
//         resultString.erase(i, 2);
//         cout << "Deleted " << inputString[i] << inputString[i + 1] << " - Resulting String: " << resultString << endl;
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// using namespace std;
// int main()
// {
//     int n, m;
//     cin >> n >> m;
//     int arr[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin >> arr[i][j];
//         }
        
//     }
//     int mxRr = INT_MIN;
//     for (int k = 0; k < m; k++)
//     {
//         int i = k;
//         int j = 0;
//         int mx = 0;
//         while (i >= 0)
//         {
//             mx += arr[i][j];
//             cout << arr[i][j]<<" ";
//             i--;
//             j++;
//         }
//         mxRr = max(mxRr, mx);
//         cout << mxRr << '\n';
//     }
//     for (int k = 1; k < n; k++)
//     {
//         int i = m - 1;
//         int j = k;
//         int mx = 0;
//         while (j <= n-1)
//         {
//             mx += arr[i][j];
//             cout << arr[i][j]<<" ";
//             i--;
//             j++;
//         }
//         mxRr = max(mxRr, mx);
//         cout << mxRr << '\n';
//     }
//     cout << '\n';
//     int mxLr = INT_MIN;
//     for (int g = m-1; g >= 0; g--)
//     {
//         int mx = 0;
//         for (int i = 0, j = g; j < m; i++,j++)
//         {
//             mx += arr[i][j];
//             cout << arr[i][j] << " ";
//         }
//         mxLr = max(mxLr, mx);
//         cout << mxLr << '\n';
//     }
//     for (int g = 1; g < n; g++)
//     {
//         int mx = 0;
//         for (int i = g, j = 0; i < n; i++,j++)
//         {
//             mx += arr[i][j];
//             cout << arr[i][j] << " ";
//         }
//         mxLr = max(mxLr, mx);
//         cout << mxLr << '\n';   
//     }

//     cout << mxLr + mxRr;
//     return 0;
// }

