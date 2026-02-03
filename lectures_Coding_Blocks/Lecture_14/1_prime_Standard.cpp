#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool ans = true;

    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            ans = false;
        }
    }

    if(ans){
        cout<<"Prime Number"<<endl;
    } else {
        cout<<"Not a Prime Number"<<endl;
    }

    return 0;
}