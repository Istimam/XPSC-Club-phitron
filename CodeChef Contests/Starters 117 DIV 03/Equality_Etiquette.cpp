// #include <iostream>
// #include <cmath>

// int minMoves(int A, int B) {
//     int diff = abs(A - B);

//     // If the difference is not divisible by 2, it's not possible to make them equal
//     if (diff % 2 != 0) {
//         return -1;
//     }

//     int n = 0;

//     // Calculate the minimum number of moves needed
//     for (int i = 1; i <= diff / 2; ++i) {
//         n += i;
//     }

//     return n;
// }

// void printMoves(int A, int B) {
//     int diff = abs(A - B);

//     // If the difference is not divisible by 2, it's not possible to make them equal
//     if (diff % 2 != 0) {
//         std::cout << "-1\n";
//         return;
//     }

//     int target = (A + B + diff) / 2;
//     int moves = minMoves(A, target);

//     std::cout << moves << "\n";

//     for (int i = 1; i <= diff / 2; ++i) {
//         if (A < target) {
//             std::cout << "+" << i << " ";
//             A += i;
//         } else {
//             std::cout << "-" << i << " ";
//             B += i;
//         }
//     }
// }

// int main() {
//     int T;
//     std::cin >> T;

//     while (T--) {
//         int A, B;
//         std::cin >> A >> B;

//         printMoves(A, B);
//     }

//     return 0;
// }
#include<bits/stdc++.h>
#define For(i,A,B) for(int i = A; i < B; i++)
#define NL '\n'
#define ll long long
#define YES cout<< "YES" <<NL;
#define NO cout<< "NO" <<NL;
const int MOD = 1e9 + 7;
using namespace std;
int main()
{
    int num = 10;
    int *p1 = &num;
    int *p2 = p1;
    (*p1)++;
    (*p2) += 5;
    int r = num;
    printf("%d", r--);
    return 0;
}