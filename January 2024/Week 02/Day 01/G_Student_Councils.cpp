// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// #define NL '\n'
// #define ll long long
// #define YES cout<< "YES" <<NL;
// #define NO cout<< "NO" <<NL;
// const int MOD = 1e9 + 7;
// using namespace std;
// int main()
// {
//     int k, n;
//     cin >> k >> n;
//     vector<ll> v(n);
//     ll sum = 0;
//     For(i, 0, n){
//         cin >> v[i];
//         sum += v[i];
//     }
//     ll l = 0, h = LLONG_MAX, ans = 0;
//     while (l <= h)
//     {
//         ll mid = l + (h - l) / 2;
//         ll council = sum / mid;
//         if(council < k){
//             h = mid - 1;
//         }
//         else{
//             ans = mid;
//             l = mid + 1;
//         }
//     }
//     cout << ans << NL;
//     return 0;
// }
#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;

int main() {
    int k, n;
    cin >> k >> n;
    vector<ll> v(n);
    priority_queue<ll> pq;

    ll sum = 0;
    For(i, 0, n){
        cin >> v[i];
        sum += v[i];
        pq.push(v[i]);
    }

    ll ans = 0;
    while (!pq.empty()) {
        ll group_size = pq.top();
        pq.pop();

        // If we can form a council with remaining students
        if (group_size >= k) {
            ans += group_size / k;
            sum -= (group_size / k) * k;
            group_size %= k;
        }

        // Add the remaining students back to the priority queue
        if (group_size > 0) {
            pq.push(group_size);
        }
    }

    ans += sum / k;

    cout << ans << NL;
    return 0;
}
