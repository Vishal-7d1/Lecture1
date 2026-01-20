#include<iostream>
using namespace std;

int main(){
    int A,B,C;
    cin>>A>>B>>C;
    if(A>B && A>C){
        cout<<"Print A is grater "<<endl;
    }
    else if(B>C){
        cout<<"Print B is grater"<<endl;
    }
    else{
        cout<<"Print C is grater"<<endl;
    }
    return 0;
}