#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
const int mx = 1e5 + 5;
vector<int> tree, v;
void build(int node,int l,int r)
{
    if(l == r){
        tree[node] = v[l];
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = l + ((r - l) / 2);
    build(leftNode, l, mid);
    build(rightNode, mid + 1, r);
    tree[node] = min(tree[leftNode], tree[rightNode]);
}
int minimum(int node,int l,int r,int x,int y)
{
    if(y < l || r < x){
        return INT_MAX;
    }
    if(l >= x && r <= y){
        return tree[node];
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = l + ((r - l) / 2);
    int e1 = minimum(leftNode, l, mid, x, y);
    int e2 = minimum(rightNode, mid + 1, r, x, y);
    return min(e1, e2);
    // return min(minimum(leftNode, l, mid, x, y), minimum(rightNode, mid + 1, r, x, y));
}
void solve()
{
    int n, q;
    cin >> n >> q;
    v.assign(n, 0);
    For(i,0,n){
        cin >> v[i];
    }
    tree.assign((4 * n) + 2, 0);
    build(1, 0, n - 1);
    // for (int i = 1; i < 10; i++)
    // {
    //     cout << i << ' ' << tree[i] << nl;
    // }
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        int ans = minimum(1, 0, n - 1, x, y);
        cout << ans << nl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int j = 1;
    while (j<=t)
    {
        cout << "Case " << j << ':' << nl;
        solve();
        j++;
    }
    return 0;
}