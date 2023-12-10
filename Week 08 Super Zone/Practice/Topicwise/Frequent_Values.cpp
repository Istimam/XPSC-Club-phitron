#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
const int mx = 1e5 + 5;
using namespace std;
class Node{
    public:
        int ans, leftMost, rightMost, frLeftMost, frRightMost;
        Node(){}
        Node(int a,int lm,int rm,int flm,int frm){
            ans = a;
            leftMost = lm;
            rightMost = rm;
            frLeftMost = flm;
            frRightMost = frm;
        }
};
Node tree[mx * 3];
Node merge(Node L,Node R)
{
    if(L.ans == 0){
        return R;
    }
    if(R.ans == 0){
        return L;
    }
    Node n;
    if(L.leftMost == R.rightMost){
        int tmp = L.frLeftMost + R.frRightMost;
        n.frLeftMost = tmp;
        n.frRightMost = tmp;
        n.ans = tmp;
    }
    else if(L.leftMost == R.leftMost){
        n.frLeftMost = L.frLeftMost + R.frLeftMost;
        n.frRightMost = R.frRightMost;
        n.ans = max(n.frLeftMost, R.ans);
    }
    else if(R.rightMost == L.rightMost){
        n.frLeftMost = L.frLeftMost;
        n.frRightMost = L.frRightMost + R.frLeftMost;
        n.ans = max(n.frRightMost, L.ans);
    }
    else if(L.rightMost == R.leftMost){
        n.frLeftMost = L.frLeftMost;
        n.frRightMost = R.frRightMost;
        n.ans = max({L.ans, R.ans, L.frRightMost + R.frLeftMost});
    }
    else{
        n.frLeftMost = L.frLeftMost;
        n.frRightMost = R.frRightMost;
        n.ans = max(L.ans, R.ans);
    }
    n.leftMost = L.leftMost;
    n.rightMost = R.rightMost;
    return n;
}
void build(int node,int l,int r,vector<int> &v)
{
    if(l == r){
        tree[node].ans = 1;
        tree[node].frLeftMost = 1;
        tree[node].rightMost = v[r];
        tree[node].frRightMost = 1;
        tree[node].leftMost = v[l];
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = l + ((r - l) / 2);
    build(leftNode, l, mid, v);
    build(rightNode, mid + 1, r, v);
    tree[node] = merge(tree[leftNode], tree[rightNode]);
}
Node query(int node,int l,int r,int x,int y)
{
    if(y < l || x > r){
        return Node(0, 0, 0, 0, 0);
    }
    if(x <= l && y >= r){
        return tree[node];
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = l + ((r - l) / 2);
    // query(leftNode, l, mid, x, y);
    // query(rightNode, mid + 1, r, x, y);
    return merge(query(leftNode, l, mid, x, y), query(rightNode, mid + 1, r, x, y));
}
int main()
{
    while (true)
    {
        int val, q;
        cin >> val;
        if(val==0){
            break;
        }
        cin >> q;
        vector<int> v(val);
        For(i,0,val){
            cin >> v[i];
        }
        build(1, 0, val - 1, v);
        // for (int i = 1; i < 16; i++)
        // {
        //     cout << i << "->" << tree[i].leftMost << ' ' << tree[i].frLeftMost << " ans " << tree[i].ans << ' ' << tree[i].rightMost << ' ' << tree[i].frRightMost << nl;
        // }
        
        while (q--)
        {
            int x, y;
            cin >> x >> y;
            x--;
            y--;
            // Node ansNode = query(1, 0, val - 1, x, y);
            cout << query(1, 0, val - 1, x, y).ans << nl;
            // cout << x << ' ' << y << nl;
        }
    }
    return 0;
}