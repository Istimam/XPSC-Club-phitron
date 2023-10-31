#include <bits/stdc++.h>
using namespace std;
long long gcd(long long a, long long b) 
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int main() 
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    long long gcd_value = a[0];
    for (int i = 1; i < n; i++) 
    {
        gcd_value = gcd(gcd_value, a[i]);
    }
    int divisors = 0;
    for (long long i = 1; i * i <= gcd_value; i++) 
    {
        if (gcd_value % i == 0) 
        {
            divisors++;
            if (i != gcd_value / i) 
            {
                divisors++;
            }
        }
    }
    cout << divisors << endl;
    return 0;
}
