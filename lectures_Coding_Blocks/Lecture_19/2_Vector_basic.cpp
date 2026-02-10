#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    a.push_back(5);
    cout<<a.size()<<endl;

    cout<<a.capacity()<<endl;

    a.pop_back();

    cout<<a.size()<<endl;

    cout<<a.capacity()<<endl;

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<a.front()<<endl;

    cout<<a.back()<<endl;
    a.insert(a.begin()+0,6);
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    return 0;

}