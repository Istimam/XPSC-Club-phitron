#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
const int MOD = 1e9 + 7;
using namespace std;
string s;
ll pb, ps, pc, tk, bb, ss, cc;
ll B = 0, S = 0, C = 0;
bool possible(ll mid)
{
    ll bread = mid * B, sauce = mid * S, cheese = mid * C;
    ll money = tk;
    ll shopBread = 0;
    if (bread > bb){
        bread -= bb;
        shopBread = bread * pb;
    }
    ll shopSausce = 0;
    if(sauce > ss){
        sauce -= ss;
        shopSausce = sauce * ps;
    }
    ll shopCheese = 0;
    if(cheese > cc){
        cheese -= cc;
        shopCheese = cheese * pc;
    }
    return (shopBread+shopCheese+shopSausce <= money);
}
int main()
{
    cin >> s >> bb >> ss >> cc >> pb >> ps >> pc >> tk;
    for(auto i:s){
        if(i == 'B')
            B++;
        else if(i == 'S')
            S++;
        else
            C++;
    }
    ll l = 0, h = 1e15, ans = 0;
    while (l<=h)
    {
        ll mid = l + (h - l) / 2;
        if(!possible(mid)){
            h = mid - 1;
        }
        else{
            ans = mid;
            l = mid + 1;
        }
    }
    cout << ans << NL;
    return 0;
}