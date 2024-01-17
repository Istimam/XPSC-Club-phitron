#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
#define YES cout<< "YES" <<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    ll n, k;
    cin >> k >> n;
    priority_queue<ll> pq;
    vector<ll> v(n);
    For(i, 0, n) {
        cin >> v[i];
        pq.push(v[i]);
    }
    while (pq.size())
    {
        cout << pq.top() << ' ';
        pq.pop();
    }
    
    return 0;
}