#include<bits/stdc++.h>
using namespace std;
vector<int> primes;
bool isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return originalNum == reversedNum;
}

void generatePrimes(int limit) {
    vector<bool> isPrime(limit + 1, true);

    for (int i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    
    for (int i = 2; i <= limit; ++i) {
        if (isPrime[i] && isPalindrome(i)) {
            primes.push_back(i);
        }
    }
}
void solve(){
    int n;
    cin >> n;
    int odd = 0, even = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     string s = to_string(primes[i]);
    //     if((s.size()&1) == 0){
    //         even++;
    //     }
    //     else{
    //         odd++;
    //     }
    // }
    // for(auto i:primes){
    //     cout<<i << ' ';
    // }
    cout << primes.size();
    // cout << even << ' ' << odd << '\n';

}
int main() {
    int limit = 100000;
    generatePrimes(limit);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// #define nl '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// using namespace std;
// void solve()
// {
//     int n;
//     cin >> n;
//     if(n > 4){
//         cout << 1 << ' ' << n - 1 << nl;
//     }
//     else{
//         cout << 0 << ' ' << n << nl;
//     }
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }