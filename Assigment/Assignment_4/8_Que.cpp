#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a=1,b=0,c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<b<<"\t";
            c=a+b;
            a=b;
            b=c;
        }
        cout<<endl;
    }
    return 0;
}