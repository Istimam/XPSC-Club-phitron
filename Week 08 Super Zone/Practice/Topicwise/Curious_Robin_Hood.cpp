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
    int mid = (l + r) / 2;
    build(leftNode, l, mid);
    build(rightNode, mid + 1, r);
    tree[node] = tree[leftNode] + tree[rightNode];
}
void deleteNode(int node,int l,int r,int idx,int x,int val)
{
    if(l > idx || r < idx)
        return;
    if(l == idx && l == r){
        if(x == 1){
            cout << tree[node] << nl;
            tree[node] = 0;
            return;
        }
        tree[node] += val;
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    deleteNode(leftNode, l, mid, idx, x, val);
    deleteNode(rightNode, mid + 1, r, idx, x, val);
    tree[node] = tree[leftNode] + tree[rightNode];
}
int query(int node,int l,int r,int x,int y)
{
    if(y < l || r < x)
    {
        return 0;
    }
    if(l >= x && r <= y){
        return tree[node];
    }
    int leftNode = node * 2;
    int rightNode = leftNode+1;
    int mid = (l + r) / 2;
    return query(leftNode, l, mid, x, y) + query(rightNode, mid + 1, r, x, y);
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
    //     cout << tree[i] << ' ';
    // }
    // cout << nl;
    while (q--)
    {
        int x;
        cin >> x;
        if(x == 1){
            int idx;
            cin >> idx;
            deleteNode(1, 0, n - 1, idx, x, 0);
        }
        else if(x == 2){
            int idx, val;
            cin >> idx >> val;
            deleteNode(1, 0, n - 1, idx, x, val);
            // for (int i = 1; i < 10; i++)
            // {
            //     cout << tree[i] << ' ';
            // }
            // cout << nl;
        }
        else{
            int x, y;
            cin >> x >> y;
            int ans = query(1, 0, n - 1, x, y);
            cout << ans << nl;
        }
    }
    
}
int main()
{
    int t;
    cin >> t;
    int j = 1;
    while (j <= t)
    {
        cout << "Case " << j << ':' << nl;
        solve();
        j++;
    }
    return 0;
}