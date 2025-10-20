#include<iostream>
#include<vector>
using namespace std;
void demu(const int &n){
  int r=1+n;
  for(int i=2;i*i<=n;i++){
    if(n%i==0){
      r+=i;
      int j=n/i;
      if(j!=i){r+=j;}
    }
  }
  cout<<(2*n<=r)<<"\n";
}
int n,a;
int main(){
  cin.tie(0)->sync_with_stdio(0);
  vector<int>divsum(1000005,0);
  for(int i=1;i<=1000000;i++){
    for(int j=i;j<=1000000;j+=i){divsum[j]+=i;}
  }
  cin>>n;
  while(n--){
    cin>>a;
    //demu(a);
    cout<<(2*a<=divsum[a])<<"\n";
  }
}