#include"iostream"
#include"vector"
#include"utility"
#define ll long long
using namespace std;
vector<ll>factorize(ll n){
  vector<ll>factors({1});
  while(n%2==0){factors.push_back(2);n/=2;}
  for(int i=3;i*i<=n;i+=2){
    while(n%i==0){factors.push_back(i);n/=i;}
  }
  if(n>2){factors.push_back(n);}
  return factors;
}
int main(){
  ll num;cin>>num;
  vector<ll>facts=factorize(num);
  for(int i=0;i<facts.size()-1;i++){
    cout<<facts[i]<<"*";
  }
  cout<<facts[facts.size()-1];
}
