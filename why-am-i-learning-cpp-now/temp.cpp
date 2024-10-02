#include"iostream"
#include"vector"
using namespace std;
#define ll long long
ll sumOfDivisors(ll n){
  ll sum=0;
  for(ll i=2;i*i<=n;i++){
    if(n%i==0){
      if(i==(n/i)){sum+=i;}else{sum+=(i+(n/i));}
    }
  }
	return (sum+1);
}
int main(){
  long long n;cin>>n;cout<<sumOfDivisors(n);
}