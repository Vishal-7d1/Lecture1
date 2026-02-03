#include<iostream>
using namespace std;
int main(){
    int m;
    cin>>m;
    int count;
    int n=(m/2)+1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-1;j++){
            cout<<"\t";
        }
        for(int j=1;j<= ;j++){
        if(i==1){
            cout<<i;
        }
        else{
            for(int j=1;j<=i-1;j++){
                cout<<j;
            }
        }
        cout<<endl;
     }
    }

    return 0;
}