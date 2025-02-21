#include"iostream"
#include"cmath"
using namespace std;
int n,sq=1;
int main(){
  cin>>n;
  sq=sqrt(n);
  if(sq*sq>=n){
    cout<<sq<<" "<<sq;
  }else if(sq*(sq+1)>=n){
    cout<<sq<<" "<<sq+1;
  }else{
    cout<<sq+1<<" "<<sq+1;
  }
}