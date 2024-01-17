#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x1, y1, x2, y2, x3, y3, x4, y4;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

        // Calculate the side length of the square
        int side_length = max(abs(x1 - x2), abs(y1 - y2));

        // Calculate and print the area of the square
        cout << side_length * side_length << endl;
    }

    return 0;
}
