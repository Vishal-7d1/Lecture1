#include<iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  if(n>=300 && n<=460){
    cout<<" You won a Macbook"<<endl;
  }
    if( n>=300 && n<=380){
      cout<<"Model:M1 Mac"<<endl;
    }
    else{
      cout<<"Model:M2 Mac"<<endl;
    }
  if(n>=200 && n<=280){
    cout<<"You won a pack of Kurkure"<<endl;
  }
    if(n>=200 && n<=240){
      cout<<"Flavor:Chilli Kurkure"<<endl;

    }
    else{
      cout<<"Flavor: Onion Kurkure"

    }
  else if(n>=1100 && n<=1300){
    cout<<"You won a Cycle!"<<endl; 
  }
    if( )

    else{
    cout<<"Better luck next time"<<endl;
  }

  return 0;
}