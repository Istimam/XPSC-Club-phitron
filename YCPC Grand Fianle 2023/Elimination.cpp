#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define nl '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
const int mx = 1e6 + 5;
class Node{
    public:
        int ans, open, close;
        Node(int a,int o,int c){
            ans = a;
            open = o;
            close = c;
        }
        Node(){};
};
Node tree[mx*3];
Node merge(Node a,Node b)
{
    int ans = min(a.open, b.close);
    a.open -= ans;
    b.close -= ans;
    Node n(a.ans + b.ans + ans, a.open + b.open, a.close + b.close);
    return n;
}
void build(int node,int l,int r,string &s)
{
    if(l == r){
        if(s[l] == '('){
            tree[node].open = 1;
            tree[node].close = 0;
            tree[node].ans = 0;
        }
        else{
            tree[node].close = 1;
            tree[node].open = 0;
            tree[node].ans = 0;
        }
        return;
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    build(leftNode, l, mid, s);
    build(rightNode, mid + 1, r, s);
    tree[node] = merge(tree[leftNode], tree[rightNode]);
}
Node query(int node,int l,int r,int x,int y)
{
    if(y < l || r < x){
        return Node(0, 0, 0);
    }
    if(x<=l && y >= r){
        return tree[node];
    }
    int leftNode = node * 2;
    int rightNode = leftNode + 1;
    int mid = (l + r) / 2;
    return merge(query(leftNode, l, mid, x, y), query(rightNode, mid + 1, r, x, y));
}
int main()
{
    string s="",ss;
    cin >> ss;
    For(i,0,ss.size()){
        if(ss[i] == '0'){
            s += '(';
        }
        else{
            s += ')';
        }
    }
    // cout << s;
    build(1, 0, s.size() - 1, s);
    // For(i,1,16){
    //     cout << i << "->" << tree[i].ans << " " << tree[i].open << ' ' << tree[i].close << nl;
    // }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        Node ansNode = query(1, 0, s.size() - 1, x, y);
        cout << ansNode.ans * 2 << nl;
    }
    
    return 0;
}