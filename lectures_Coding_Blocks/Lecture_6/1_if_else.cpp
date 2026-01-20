#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  if(n>=300 && n<=460){
    cout<<" Macbook"<<endl;
  }
  else if(n>=200 && n<=280){
    cout<<"Kurkure"<<endl;
  }
  else if (n>=100 && n<=1500){
    cout<<" Cycle "<<endl;
  }
  else{
    cout<<" Better luck next time "<<endl;
  }
   
  return 0;
}