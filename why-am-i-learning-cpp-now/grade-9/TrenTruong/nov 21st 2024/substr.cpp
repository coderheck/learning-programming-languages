#include"iostream"
#include"string"
#include"map"
using namespace std;
int k,res=0,d=0,a[1000005];string s;map<int,int>cnt;
int main(){
  cin>>k;cin>>s;
  cnt[0]=1;
  for(int i=0;i<s.size();i++){
    d=s[i]-'0';
    a[i]=a[i-1]+d;
    if(a[i]>=k){res+=cnt[a[i]-k];}
    cnt[a[i]]++;
  }
  cout<<res;
}