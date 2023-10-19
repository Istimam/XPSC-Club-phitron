// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// using namespace std;
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> v(n);
//         map<int, int> mp;
//         For(i, 0, n)
//         {
//             int x;
//             cin >> x;
//             mp[x]++;
//         }

//         sort(v.begin(), v.end());
//         // v.push_back(v.back());
//         vector<int> v2;
//         for (int i = 0; i < n-1; i++)
//         {
//             if(v[i] != )
//         }
//         for(auto i:v)
//             cout << i << " ";
//         cout << '\n';
//         for(auto i:v2)
//             cout << i << " ";
//     }
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 8, 10};

    unordered_set<int> elements;
    int numSets = 0;

    for (int num : arr) {
        elements.insert(num);
    }

    for (int num : arr) {
        if (elements.count(num) > 0) {
            numSets++;
            while (elements.count(num) > 0) {
                elements.erase(num++);
            }
        }
    }

    cout << "Number of sets: " << numSets << endl;

    return 0;
}
