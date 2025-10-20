#include<iostream>
using namespace std;
#define ll long long
ll t,n;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>t;
  while(t--){
    cin>>n;
    cout<<n*(n+1)*(2*n+1)/6<<"\n";
  }
}
