#include<iostream>
using namespace std;
int main(){
    int arr [5];
    int arr_b[]={1,2,3,4,5};
    int n;
    cin>>n;
    int arr_c[n];
    int s=sizeof(arr)/sizeof(int);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
