#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int freq[26] = {0};

        // Step 1: frequency count
        for(int i = 0; i < s.length(); i++){
            freq[s[i] - 'a']++;
        }

        // Step 2: first non-repeating
        char ans = '#';
        for(int i = 0; i < s.length(); i++){
            if(freq[s[i] - 'a'] == 1){
                ans = s[i];
                break;
            }
        }

        if(ans == '#'){
            cout << -1 << endl;
        }
        else{
            cout << ans << endl;
        }
    }

    return 0;
}