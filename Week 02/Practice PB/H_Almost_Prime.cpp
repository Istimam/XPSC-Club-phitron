#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> primes;
    FOR(i,2,(n/2)+1)
    {
        int pr = 0;
        FOR(j,2,i+1)
        {   
            if(i%j == 0)
            {
                pr++;
            }
        }
        if(pr == 1)
        {
            primes.push_back(i);
        }
    }
    int cnt = 0;
    FOR(i,6,n+1)
    {
        int j = 0, AlmostPrime = 0;
        while (primes[j] <= i && j < primes.size())
        {
            if(i%primes[j] == 0)
            {
                AlmostPrime++;
            }
            j++;
        }
        if(AlmostPrime == 2)
        {
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}

// #include <iostream>
// #include <vector>

// using namespace std;

// vector<int> sieve_eratosthenes(int n) {
//     // Create a vector of prime numbers using Sieve of Eratosthenes
//     vector<bool> is_prime(n + 1, true);
//     is_prime[0] = is_prime[1] = false;
//     vector<int> primes;

//     for (int p = 2; p <= n; ++p) {
//         if (is_prime[p]) {
//             primes.push_back(p);
//             for (int i = p * p; i <= n; i += p) {
//                 is_prime[i] = false;
//             }
//         }
//     }

//     return primes;
// }

// int count_almost_primes(int n) {
//     vector<int> primes = sieve_eratosthenes(n);
//     int count = 0;

//     for (int x = 1; x <= n; ++x) {
//         int divisors = 0;
//         for (int p : primes) {
//             if (p > x) {
//                 break;
//             }
//             if (x % p == 0) {
//                 divisors += 1;
//             }
//             if (divisors > 2) {
//                 break;
//             }
//         }
//         if (divisors == 2) {
//             count += 1;
//         }
//     }

//     return count;
// }

// int main() {
//     int n;
//     cin >> n;
//     int result = count_almost_primes(n);
//     cout << result << endl;
//     return 0;
// }
