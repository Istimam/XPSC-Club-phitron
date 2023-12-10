// #include<bits/stdc++.h>
// #define For(i,A,B) for(int i = A; i < B; i++)
// #define nl '\n'
// #define ll long long
// const int MOD = 1e9 + 7;
// using namespace std;
// int main()
// {
//     int zero, ones, k;
//     cin >> zero >> ones >> k;
//     if(k == 1){
//         while (zero--)
//         {
//             cout << 0;
//         }
//         while (ones--)
//         {
//             cout << 1;
//         }
//         cout << nl;
//         return 0;
//     }
//     if(ones >= zero){
//         string s = "1";
//         int i = 0;
//         while(i < k-1){
//             if(s[i] == '1'){
//                 s += '0';
//             }
//             else{
//                 s += '1';
//             }
//             i++;
//         }
//         if(s[s.size()-1] == '1'){
//             ones = ones - ((s.size() / 2) + 1);
//             zero = zero - (s.size() / 2);
//             while (ones>0)
//             {
//                 ones--;
//                 s += '1';
//             }
//             while (zero>0)
//             {
//                 zero--;
//                 s += '0';
//             }
//         }
//         else{
//             ones = ones - (s.size() / 2);     
//             zero = zero - (s.size() / 2); 
//             while (zero>0)
//             {
//                 zero--;
//                 s += '0';
//             }
//             while (ones>0)
//             {
//                 ones--;
//                 s += '1';
//             }
//         }
//         cout << s << nl;
//     }
//     else{
//         string s = "0";
//         int i = 0;
//         while(i < k-1){
//             if(s[i] == '1'){
//                 s += '0';
//             }
//             else{
//                 s += '1';
//             }
//             i++;
//         }
//         if(s[s.size()-1] == '1'){
//             ones = ones - (s.size() / 2);     
//             zero = zero - (s.size() / 2);
//             while (ones>0)
//             {
//                 ones--;
//                 s += '1';
//             }
//             while (zero > 0)
//             {
//                 zero--;
//                 s += '0';
//             }
//         }
//         else{
//             ones = ones - (s.size() / 2);
//             zero = zero - ((s.size() / 2) + 1);
//             // cout << ones << ' ' << zero << nl;
//             while (zero > 0)
//             {
//                 s += '0';
//                 zero--;
//             }
//             while (ones>0)
//             {
//                 ones--;
//                 s += '1';
//             }
//         }
//             // cout << s << ' ' << s.size() << nl;
//         cout << s << nl;
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main() {
#ifdef _DEBUG
	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
#endif
	
	int a, b, x;
	cin >> a >> b >> x;
	
	if (x % 2 == 0) {
		if (a > b) {
			for (int i = 0; i < x / 2; ++i)
				cout << "01";
			cout << string(b - x / 2, '1');
			cout << string(a - x / 2, '0');
		} else {
			for (int i = 0; i < x / 2; ++i)
				cout << "10";
			cout << string(a - x / 2, '0');
			cout << string(b - x / 2, '1');
		}
	} else if (a > b) {
		for (int i = 0; i < x / 2; ++i)
			cout << "01";
		cout << string(a - x / 2, '0');
		cout << string(b - x / 2, '1');
	} else {
		for (int i = 0; i < x / 2; ++i)
			cout << "10";
		cout << string(b - x / 2, '1');
		cout << string(a - x / 2, '0');
	}
	cout << endl;
	
	return 0;
}