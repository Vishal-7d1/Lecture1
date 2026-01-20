#include<iostream>
using namespace std;

int main(){
    int M;
    cin>>M;
    if(M>=90){
        cout<<"A "<<endl;
    }
    else if(M>=80){
        cout<<" B"<<endl;
    }
     else if(M>=70){
        cout<<"C"<<endl;
    }
     else if(M>=60){
        cout<<" D"<<endl;
    }
    else{
        cout<<" Fail"<<endl;
    }
    return 0;
}