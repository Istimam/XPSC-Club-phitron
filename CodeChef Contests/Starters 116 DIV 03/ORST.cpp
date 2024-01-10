#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n), ind(k);
    For(i, 0, n) cin >> v[i];
    For(i, 0, k) cin >> ind[i];
    int mx = *max_element(ind.begin(), ind.end());
    int x = n - mx;
    sort(v.begin() + x, v.end());
    for(auto i:v)
        cout << i << ' ';
    cout << NL;
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

// #include <iostream>
// #include <vector>
// void findCombinations(int x, std::vector<int>& current, int start) {
//     if (x == 0) {
//         // Print the current combination
//         for (int num : current) {
//             std::cout << num << " ";
//         }
//         std::cout << std::endl;
//         return;
//     }
//     for (int i = start; i > 0; i -= 2) {
//         if (i <= x) {
//             current.push_back(i);
//             findCombinations(x - i, current, i - 2);
//             current.pop_back();
//         }
//     }
// }
// int main() {
//     int x;
//     std::cin >> x;
//     std::vector<int> current;
//     findCombinations(x, current, (x % 2 == 0) ? x - 1 : x);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <unordered_set>

// void findCombinations(int x, std::vector<int>& current, int start, std::unordered_set<int>& lengths, int& count) {
//     if (x == 0) {
//         int length = current.size();
//         if (lengths.find(length) == lengths.end()) {
//             // Increment the count for each distinct length
//             count++;

//             // Mark the length as found
//             lengths.insert(length);
//         }
//         return;
//     }

//     for (int i = start; i > 0; i -= 2) {
//         if (i <= x) {
//             current.push_back(i);
//             findCombinations(x - i, current, i - 2, lengths, count);
//             current.pop_back();
//         }
//     }
// }

// int main() {
//     int x;
//     std::cin >> x;
//     std::vector<int> current;
//     std::unordered_set<int> lengths;
//     int count = 0;
//     findCombinations(x, current, (x % 2 == 0) ? x - 1 : x, lengths, count);

//     std::cout<< count << std::endl;

//     return 0;
// }





