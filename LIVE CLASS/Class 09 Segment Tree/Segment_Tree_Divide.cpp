#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
const int mx = 1e5 + 5;
vector<int> tree, a;
void build(int node,int l,int r){
    // cout << node << ' ' << l << ' ' << r << nl;
    if(l == r){
        tree[node] = a[l];
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    build(leftNode, l, mid);
    build(rightNode, mid + 1, r);
    tree[node] = tree[leftNode] + tree[rightNode];
}
int query(int node,int l,int r,int x,int y)
{
    /*Case 1*/
    if(r<x || l>y)
        return 0;
    if(l>= x && r<=y){
        return tree[node];
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    return query(leftNode, l, mid, x, y) +
           query(rightNode, mid + 1, r, x, y);
}
void update(int node,int l,int r,int idx,int val)
{
    if(idx < l || idx > r)
        return;
    if(l == r && l == idx){
        tree[node] = val;
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    update(leftNode, l, mid, idx, val);
    update(rightNode, mid + 1, r, idx, val);
    tree[node] = tree[leftNode] + tree[rightNode];
}
int main()
{
    int n;
    cin >> n;
    a.assign(n, 0);
    For(i,0,n){
        cin >> a[i];
    }
    tree.assign((4 * n) + 2, 0);
    build(1, 0, n - 1);
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if(x == 1)
        {
            int xx, yy;
            cin >> xx >> yy;
            xx--;
            yy--;
            int ans = query(1, 0, n - 1, xx, yy);
            cout << ans << nl;
        }
        else{
            int idx, val;
            cin >> idx >> val;
            idx--;
            update(1, 0, n - 1, idx, val);
        }
    }
    for (int i = 1; i < 10; i++)
    {
        cout << i << ' '<<tree[i] << nl;
    }
    return 0;
}