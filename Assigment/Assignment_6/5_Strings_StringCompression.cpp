#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int count=1;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            count++;
        }
    
        else{
            if(count>1){
            cout<<s[i]<<count;
            }
            else{
            cout<<s[i];
            }
            count=1;

        }
        
    }
   

    return 0;
}
