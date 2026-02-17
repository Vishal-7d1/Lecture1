#include<iostream>
#include<vector>
using namespace std;
vector<int>convert(int n){
    vector<int>number;
    while(n!=0){
        int k=n%10;
        number.push_back(k);
        n=n/10;
    }
}
int main(){
    return 0;
}
