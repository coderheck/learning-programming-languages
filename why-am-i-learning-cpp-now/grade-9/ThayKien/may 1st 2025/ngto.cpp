#include<iostream>
// #include<string>
#include<vector>
using namespace std;
#define ll long long
#define maxP 300000
ll n,c=0;/*string s*/;bool pr[maxP+5];vector<ll>res;
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
int main(){
  prSieve();
  cin>>n;
  // for(ll i=2;i<=n/2;i++){
  //   if(!pr[i]&&!pr[n-i]&&i!=n-i){s+=to_string(i)+" "+to_string(n-i)+"\n";c++;}
  // }
  // FUCK THEMIS
  // cout<<c<<"\n"<<s;
  for(ll i=2;i<=n/2;i++){
    if(!pr[i]&&!pr[n-i]&&i!=n-i){res.push_back(i);res.push_back(n-i);c++;}
  }
  cout<<c<<"\n";
  for(ll i=0;i<res.size();i+=2){cout<<res[i]<<" "<<res[i+1]<<"\n";}
}