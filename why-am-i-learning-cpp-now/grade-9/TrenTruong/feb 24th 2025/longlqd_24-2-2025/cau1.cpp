#include<iostream>
using namespace std;
#define ll long long
ll min(ll a,ll b){return(a<b)?a:b;}
ll m,n,k;
int main(){
  cin>>m>>n>>k;
  cout<<min(m,min(n,k));
}