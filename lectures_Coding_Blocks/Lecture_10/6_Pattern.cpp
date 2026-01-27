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
            if(j==1){
                cout<<"* ";
        }
        cout<<endl;
    }
   }
    return 0;
}