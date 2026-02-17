#include <iostream>
#include <cmath>
using namespace std;
int inverse(int n){
    int ans =1;
    int i =1;
    while (n>0){
        int digit=n % 10;
        ans += i*pow(10, digit-1);
        n /= 10;
        i++;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    cout << inverse(n) << endl;
    return 0;
}