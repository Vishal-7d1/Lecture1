// 5 4 3 2 *
// 5 4 3 * 1
// 5 4 * 2 1
// 5 * 3 2 1
// * 4 3 2 1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        // print decreasing numbers
        for(int j=n;j>=i+1;j--){
            cout<<j<<" ";
        }
        // print star
        cout<<"* ";
        // print increasing numbers
        for(int j=i-1;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}