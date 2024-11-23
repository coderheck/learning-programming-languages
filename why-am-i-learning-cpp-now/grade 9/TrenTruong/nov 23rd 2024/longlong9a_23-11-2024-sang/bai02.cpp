#include"iostream"
#include"cmath"
using namespace std;
#define ll long long
ll n,m;
int main(){
  cin>>n;
  m=sqrt(n);
  if(m*m==n){
    cout<<m<<" "<<m;
  }else if(m*(m+1)==n){
    cout<<m<<" "<<m+1;
  }else{
    cout<<m+1<<" "<<m+1;
  }
}