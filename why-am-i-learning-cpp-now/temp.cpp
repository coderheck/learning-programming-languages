#include"iostream"
using namespace std;
#define ll long long
ll n,x;
int main(){
  cin>>n>>x;
  if(n%2==0){
    cout<<n/2*x;
  }else{
    cout<<(n/2+1)*x;
  }
}