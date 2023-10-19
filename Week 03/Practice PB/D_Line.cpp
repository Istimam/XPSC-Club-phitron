#include <bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define ll long long
using namespace std;
void solve() 
{
	int n;
	cin >> n;
	string s;
	cin >> s;
	ll sum = 0;
	vector<ll> v;
	for (int i = 0; i < n; i++) 
    {
		if (s[i] == 'L') 
        {
			v.push_back((n - 1 - i) - i);
			sum += i;
		}
		else 
        {
			v.push_back(i - (n - 1 - i));
			sum += n - 1 - i;
		}
	}
    sort(v.begin(), v.end(), greater<int>());
    // for(auto i:v)
    //     cout << i << ' ';
    // cout << sum;

	for (int i = 0; i < n; i++) 
    {
		// cout << sum << '\n';
		if (v[i] > 0) 
        {
            sum += v[i];
        }
		cout << sum << ' ';
	}
	cout << '\n';
}
int main() 
{
	int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}