// #include<bits/stdc++.h>
// #define FOR(i,A,b) for(int i = (A); i < (b); i++)
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     map<int,int> mp;
//     FOR(i,0,n)
//     {
//         int x;
//         cin >> x;
//         mp[x]++;
//     }
//     for(auto i:mp)
//     {
//         if(i.second == 1)
//         {
//             cout << i.first << '\n';
//         }
//     }
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        // Check if the current element is unique by comparing it with adjacent elements
        if ((arr[i] != arr[i - 1] || i == 0) && (i == n - 1 || arr[i] != arr[i + 1])) {
            std::cout << arr[i] << '\n';
        }
    }

    return 0;
}
