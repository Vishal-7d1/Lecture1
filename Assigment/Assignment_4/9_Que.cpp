//  1           1
//  1 2       2 1  
//  1 2 3   3 2 1
//  1 2 3 4 3 2 1   
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        //left side
        for(int j=1;j<=i;j++){
            cout<<j<<"\t";
        }
        //spaces
        int spaces = 2*(n - i)-1;
        for(int j=1;j<=spaces;j++){
            cout<<"\t";
        }
        //right side
        for(int j=i;j>=1;j--){
            if(j==n){
                continue;
            }
            cout<<j<<"\t";
        }
        cout<<endl;
    
    }
    return 0;
}