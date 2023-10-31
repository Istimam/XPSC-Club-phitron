#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    For(i, 0, n)
            cin >> a[i];
    int x;
    cin >> x;
    auto it = upper_bound(a.begin(), a.end(), x);
    int idx = it - a.begin();
    cout << "Value: " << *it << ' ' << "Index: " << idx;
    return 0;
}