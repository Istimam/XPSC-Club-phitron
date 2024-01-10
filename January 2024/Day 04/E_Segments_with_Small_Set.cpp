#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    For(i, 0, n) cin >> v[i];
    int i = 0, j = 0, unq = 0;
    ll cnt = 0;
    vector<int> freq(100005, 0);
    while (j < n) {
        if (freq[v[j]] == 0) {
            unq++;
        }
        freq[v[j]]++;
        while (unq > k) {
            freq[v[i]]--;
            if (freq[v[i]] == 0) {
                unq--;
            }
            i++;
        }
        cnt += ((j - i) + 1);
        j++;
    }
    cout << cnt << NL;
    return 0;
}
