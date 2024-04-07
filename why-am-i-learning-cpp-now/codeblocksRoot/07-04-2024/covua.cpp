#include"iostream"
using namespace std;
int main(){
  int n;cin>>n;
  for(int i=1;i<=n;i++){
    if(i%2==1){
      int l=1;
      while(l<=n){if(l%2==1){cout<<"W";l++;}else{cout<<"B";l++;}}
      cout<<"\n";
    }else{
      int l=1;
      while(l<=n){if(l%2==1){cout<<"B";l++;}else{cout<<"W";l++;}}
      cout<<"\n";
    }
  }
}
