#include<iostream>
using namespace std;
#define ll long long
ll n,k,p,cock,rem;
int main(){
  cin>>n>>k>>p;
  cock=n/(k+1)*k;rem=n%(k+1);
  if(n%(k+1)!=0){cock+=rem;}
  cout<<cock*p;
}