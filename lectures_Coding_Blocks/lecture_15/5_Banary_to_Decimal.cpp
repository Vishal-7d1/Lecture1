#include<iostream>
using namespace std;    
int main(){
    int n;
    cin>>n;
    int dec=0;
    int place=1;

    while(n>0){
        int k=n%10;
        dec=dec+k*place;
        place=place*2;
        n=n/10;
    }
    cout<<dec;
    return 0;
}