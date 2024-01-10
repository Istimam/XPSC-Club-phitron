// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// #define NL '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// using namespace std;
// int main()
// {
//     int n, q;
//     cin >> n;
//     vector<int> v(n);
//     int mx = INT_MIN, mn = INT_MAX;
//     For(i, 0, n){
//         cin >> v[i];
//         mx = max(mx, v[i]);
//         mn = min(mn, v[i]);
//     }
//     sort(v.begin(), v.end());
//     cin >> q;
//     while (q--)
//     {
//         int a, b;
//         cin >> a >> b;
//         // int l = 0, r = n, val = -1;
//         // while (l <= r)
//         // {
//         //     int mid = l + r / 2;
//         //     if(v[mid] == a){
//         //         val = mid;
//         //         r = mid - 1;
//         //     }
//         //     else if(a < v[mid]){
//         //         r = mid - 1;
//         //     }
//         //     else{
//         //         l = mid + 1;
//         //     }
//         // }
//         // l = 0, r = n;
//         // int val2 = n;
//         // while (l <= r)
//         // {
//         //     int mid = l + (r - l) / 2;
//         //     if(v[mid] == b){
//         //         val2 = mid;
//         //         l = mid + 1;
//         //     }
//         //     else if(v[mid] > b){
//         //         r = mid - 1;
//         //     }
//         //     else{
//         //         l = mid + 1;
//         //     }
//         // }
//         if(a > mx || b < mn)
//         {
//             cout << 0 << ' ';
//             continue;
//         }
//         const auto first = lower_bound(v.begin(), v.end(), a);
//         const auto last = upper_bound(v.begin(), v.end(), b);
//         int f = first - v.begin();
//         int l = last - v.begin();
//         cout << l-f << ' ';
//         // cout << val << ' ' << val2 << NL;
//     }
    
//     return 0;
// }
// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// #define NL '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// using namespace std;

// int main() {
//     int n, q;
//     cin >> n;
//     vector<int> v(n);
//     For(i, 0, n) cin >> v[i];

//     sort(v.begin(), v.end());

//     vector<int> prefixSum(n);
//     prefixSum[0] = v[0];

//     for (int i = 1; i < n; ++i) {
//         prefixSum[i] = prefixSum[i - 1] + v[i];
//     }

//     cin >> q;
//     while (q--) {
//         int a, b;
//         cin >> a >> b;

//         if (b < v[0] || a > v[n - 1]) {
//             cout << 0 << ' ';
//             continue;
//         }

//         int low = lower_bound(v.begin(), v.end(), a) - v.begin();
//         int high = upper_bound(v.begin(), v.end(), b) - v.begin();

//         int sum = prefixSum[high - 1] - (low > 0 ? prefixSum[low - 1] : 0);

//         cout << high - low << ' ';
//     }

//     return 0;
// }
#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;

// Custom lower_bound function
int lowerBound(const vector<int>& arr, int target) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] < target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

// Custom upper_bound function
int upperBound(const vector<int>& arr, int target) {
    int low = 0, high = arr.size();
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] <= target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}

int main() {
    int n, q;
    cin >> n;
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];

    sort(v.begin(), v.end());

    vector<int> prefixSum(n);
    prefixSum[0] = v[0];

    for (int i = 1; i < n; ++i) {
        prefixSum[i] = prefixSum[i - 1] + v[i];
    }

    cin >> q;
    while (q--) {
        int a, b;
        cin >> a >> b;

        if (b < v[0] || a > v[n - 1]) {
            cout << 0 << ' ';
            continue;
        }

        int low = lowerBound(v, a);
        int high = upperBound(v, b);

        // int sum = prefixSum[high - 1] - (low > 0 ? prefixSum[low - 1] : 0);

        cout << high - low << ' ';
    }

    return 0;
}
