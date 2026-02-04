


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int rev_no = 0;

    while(n!=0){
        int last_digit = n%10;
        rev_no = rev_no*10 + last_digit;
        n = n/10;
    }

    cout<<rev_no<<endl;
    return 0;
}