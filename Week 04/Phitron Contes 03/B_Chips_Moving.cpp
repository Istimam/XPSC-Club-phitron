// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     For(i,0,n)
//     {
//         cin >> arr[i];
//     }
//     vector<int> m;
//     For(i,0,n)
//     {
//         // cout << '\n';
//         int cnt = 0;
//         For(j,0,n)
//         {
//             int dif = abs(arr[i] - arr[j]);
//             if(dif%2 != 0)
//             {
//                 cnt++;
//             }
//         }
//         m.push_back(cnt);
//     }
//     int mn = *min(m.begin(), m.end());
//     cout << mn;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n;
	cin >> n;
	int cnto = 0;
	for (int i = 0; i < n; ++i) 
    {
		int x;
		cin >> x;
		cnto += x & 1;
	}
	cout << min(cnto, n - cnto) << endl;
	return 0;
}