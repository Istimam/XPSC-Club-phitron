#include<bits/stdc++.h>
#define FOR(i,A,b) for(int i = (A); i < (b); i++)
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long L, v, l, r;
        cin >> L >> v >> l >> r;
        long long lanterns = L / v; 
        long long lanternsCovered = r / v;
        long long lanterns1 = (l - 1) / v; 
        long long visible_lanterns = lanterns - (lanternsCovered - lanterns1);
        cout << visible_lanterns << '\n';
    }
    return 0;
}


// #include<bits/stdc++.h>
// #define FOR(i,A,b) for(int i = (A); i < (b); i++)
// using namespace std;
// int main()
// {
//     long long n, v;
//     cin >> n >> v;
//     FOR(i,1,n+1)
//     {
//         int x = v * i;
//         if(x > n)
//         {
//             break;
//         }
//         cout << x << '\n';
//     }
//     return 0;
// }