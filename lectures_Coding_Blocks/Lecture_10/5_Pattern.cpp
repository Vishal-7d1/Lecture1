
//         1
//       2 3 2 
//     3 4 5 4 3
//   4 5 6 7 6 5 4
// 5 6 7 8 9 8 7 6 5 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=(n-i);j++){
            cout<<"  ";
        }
        //increasing numbers
        int v = i;
        for(int j=1;j<=i;j++){
            cout<<v<<" ";
            v++;
        }
        //decreasing numbers
        v = v - 2;
        for(int j=1;j<=i-1;j++){
            cout<<v<<" ";
            v--;
        }
        cout<<endl;
    }
    return 0;
}