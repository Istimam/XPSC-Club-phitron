#include <bits/stdc++.h>
using namespace std;

// Function to calculate the GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to calculate the LCM (Least Common Multiple)
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int findSmallestInteger(vector<int>& A) {
    int n = A.size();
    int maxElem = *max_element(A.begin(), A.end());
    vector<bool> possible(maxElem + 1, false);

    for (int i = 0; i < n; ++i) {
        int current = A[i];
        possible[current] = true;
        for (int j = 1; j * current <= maxElem; ++j) {
            possible[j * current] = true;
        }
    }

    for (int i = 1; i <= maxElem; ++i) {
        if (!possible[i]) {
            return i;
        }
    }

    return maxElem + 1;
}

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr (n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int smallestInteger = findSmallestInteger(arr);
        cout << "The smallest integer that doesn't appear as the LCM of any subsequence: " << smallestInteger << endl;
    }
    
    return 0;
}
