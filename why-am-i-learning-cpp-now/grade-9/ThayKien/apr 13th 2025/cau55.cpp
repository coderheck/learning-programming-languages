#include<iostream>
#include<string>
#include<map>
using namespace std;
#define ll long long
string s;ll n,k,a,sum=0,res=0;map<ll,ll>cnt;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n>>k;
  cnt[0]=1;
  while(n--){
    cin>>s;
    ll a=0;
    for(ll i=0;i<s.size();i++){a=(a*10+s[i]-'0')%k;}
    sum=(sum+a)%k;
    res+=cnt[sum];
    cnt[sum]++;
  }
  cout<<res;
}
