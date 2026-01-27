#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        long long val = 1; 
        
        for (int j = 0; j <= i; j++) {
            cout << val;
            if (j < i) {
                cout << "\t";
            }          
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }

    return 0;
}