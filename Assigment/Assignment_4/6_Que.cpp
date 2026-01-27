#include<iostream>
using namespace std;    
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
     //spaces
        for(int j=1;j<=(n-i);j++){
            cout<<"\t";
        }
        //increasing numbers
        int v = i;
        for(int j=1;j<=i;j++){
            cout<<v<<"\t";
            v++;
        }
        //decreasing numbers
        v = v - 2;
        for(int j=1;j<=i-1;j++){
            cout<<v<<"\t";
            v--;
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
     //spaces
        for(int j=1;j<=(n-i);j++){
            cout<<"\t";
        }
        //increasing numbers
        int v = i;
        for(int j=1;j<=i;j++){
            cout<<v<<"\t";
            v++;
        }
        //decreasing numbers
        v = v - 2;
        for(int j=1;j<=i-1;j++){
            cout<<v<<"\t";
            v--;
        }
        cout<<endl;
    }


    return 0;

}