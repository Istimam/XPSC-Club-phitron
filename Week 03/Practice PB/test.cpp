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
#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
        
    }
    
    for (int k = 0; k < m; k++)
    {
        int i = k;
        int j = 0;
        while (i >= 0)
        {
            cout << arr[i][j]<<" ";
            i--;
            j++;
        }
        cout << '\n';
    }
    for (int k = 1; k < n; k++)
    {
        int i = m - 1;
        int j = k;
        while (j <= n-1)
        {
            cout << arr[i][j]<<" ";
            i--;
            j++;
        }

        cout << '\n';
    }
    cout << '\n';
    for (int g = 0; g < m; g++)
    {
        for (int i = 0, j = g; j < m; i++,j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << '\n';
    }
    
    
    return 0;
}
