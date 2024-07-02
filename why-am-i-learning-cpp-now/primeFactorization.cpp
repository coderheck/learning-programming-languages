#include"iostream"
#include"vector"
#include"utility"
#define ll long long
using namespace std;
vector<int>factorize(int n){
  vector<int>factors;
  while(n%2==0){factors.push_back(2);}
  for(int i=3;i*i<=n;i+=2){
    
  }
  return factors;
}
int main(){
  ll num=315;
  vector<int>facts=factorize(num);
  cout<<num<<": ";
  for(int i : facts){
    cout<<i<<"*";
  }
}
