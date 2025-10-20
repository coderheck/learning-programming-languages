#include"iostream"
#include"string"
using namespace std;
#define ll long long
int cnt[1000];
string s;int res=0;
int main(){
  cin>>s;int si=s.size();
  for(int i=0;i<si;i++){
    if(s[i]>='0'&&s[i]<='9'){
      int num=s[i]-'0';
      while(s[i+1]>='0'&&s[i+1]<='9'){
        num*=10;num+=s[i+1]-'0';
        i++;
      }
      cnt[num]++;
    }
  }
  for(int i=0;i<=999;i++){if(cnt[i]!=0){res++;}}
  cout<<res;
}