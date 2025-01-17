#include<iostream>
#define ll long long
using namespace std;
ll t=0,l,c,x;int n;
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  while(n--){
    cin>>x;
    x%=2;
    if(x&1){l++;t=(t+1)%2;}else{c++;}
  }
  if(t&1){cout<<l*c;}else{cout<<l*(l-1)/2+c*(c-1)/2;}
}