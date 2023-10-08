// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e9 + 7;
// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {   
//         int n, s;
//         cin >> n >> s;
//         int a[n];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             s += a[i];
//         }
//         s = s / 2;
//         long long dp[n + 1][s + 1];
//         dp[0][0] = 1;
//         for (int i = 1; i <= s; i++)
//         {
//             dp[0][i] = 0;
//         }
//         for (int i = 1; i <= n; i++)
//         {
//             for (int j = 0; j <= s; j++)
//             {
//                 if (a[i - 1] <= j)
//                 {
//                     dp[i][j] = (dp[i - 1][j - a[i - 1]] %N+ dp[i - 1][j]%N) % N;
//                 }
//                 else
//                 {
//                     dp[i][j] = dp[i - 1][j]%N;
//                 }
//             }
//         }
//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = 0; j <= s; j++)
//             {
//                 cout << dp[i][j]<<" ";
//             }
//             cout << endl;
//         }
//         // long result = dp[n][s];
//         // cout << dp[n][s];
//     }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
const int N = 1e9 + 7;
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, d;
        cin >> n >> d;
        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }
        int sum = accumulate(a.begin(), a.end(), 0);
        if ((sum + d) % 2 != 0) 
        {
            cout << 0 << endl;
            continue;
        }
        int target = (sum + d) / 2;
        vector<long long> dp(target + 1, 0);
        dp[0] = 1;
        for (int i = 0; i < n; i++) 
        {
            for (int j = target; j >= a[i]; j--)
            {
                dp[j] = (dp[j] + dp[j - a[i]]) % N;
            }
        }
        cout << dp[target] << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int subsetSum(int a[], int n, int sum)
// {
// 	// Initializing the matrix
// 	int tab[n + 1][sum + 1];
// // Initializing the first value of matrix
// 	tab[0][0] = 1;
// 	for (int i = 1; i <= sum; i++)
// 		tab[0][i] = 0;
	

// 	for (int i = 1; i <= n; i++)
// 	{
// 		for (int j = 0; j <= sum; j++)
// 		{
// 		// if the value is greater than the sum
// 			if (a[i - 1] <= j)
// 				tab[i][j] = tab[i - 1][j] + tab[i - 1][j - a[i - 1]];
// 			else
// 			{
// 				tab[i][j] = tab[i - 1][j];
// 			}
// 		}
// 	}


// 	return tab[n][sum];
// }

// int main()
// {
// 	int n = 5;
// 	int a[] = {1,2,3,4,5};
// 	int sum = 3;

// 	cout << (subsetSum(a, n, sum));
// }
