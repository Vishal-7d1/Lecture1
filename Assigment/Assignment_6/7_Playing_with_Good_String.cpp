#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int count = 0;
    int maxi = 0;

    for(int i = 0; i < s.length(); i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
            if(count > maxi){
                maxi = count;
            }
        }
        else{
            count = 0;
        }
    }

    cout << maxi;
    return 0;
}