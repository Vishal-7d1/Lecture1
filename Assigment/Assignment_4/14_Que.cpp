#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper Half
    for (int i = 1; i <= n; i++) {
        // Left side numbers
        for (int j = n; j >= n - i + 1; j--) {
            cout << j << " ";
        }
        
        // Middle spaces
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            cout << "  ";
        }
        
        // Right side numbers
        for (int j = n - i + 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    // Center Row (The longest line with 0)
    for (int j = n; j >= 0; j--) {
        cout << j << " ";
    }
    for (int j = 1; j <= n; j++) {
        cout << j << " ";
    }
    cout << endl;

    // Lower Half (Same as Upper but reversed)
    for (int i = n; i >= 1; i--) {
        // Left side numbers
        for (int j = n; j >= n - i + 1; j--) {
            cout << j << " ";
        }
        
        // Middle spaces
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            cout << "  ";
        }
        
        // Right side numbers
        for (int j = n - i + 1; j <= n; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}