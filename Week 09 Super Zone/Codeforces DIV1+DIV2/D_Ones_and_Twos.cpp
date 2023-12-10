#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
const int mx = 1e5 + 5;
int tree[mx * 3];
void build(int node,int l,int r,vector<int> a){
    // cout << node << ' ' << l << ' ' << r << nl;
    if(l == r){
        tree[node] = a[l];
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    build(leftNode, l, mid, a);
    build(rightNode, mid + 1, r, a);
    tree[node] = tree[leftNode] + tree[rightNode];
}
void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    For(i,0,n){
        cin >> v[i];
    }
    build(1, 0, n - 1, v);
    for (int i = 1; i < 10; i++)
    {
        cout << i << ' '<<tree[i] << nl;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}