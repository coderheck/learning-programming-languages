#include"iostream"
#include"string"
#include"map"
#define ll long long
using namespace std;
string s;ll res=0;map<string,ll>cnt;
void parse(){
  int n=s.size();
  for(int i=0;i<n;i++){
    if(s[i]>='1'&&s[i]<='9'){
      string n=""+s[i];
      while(s[i+1]>='0'&&s[i+1]<='9'){
        n+=s[i+1];
        i++;
      }
      cnt[n]++;
    }
  }
  cout<<cnt.size();
}
int main(){
  if(fopen("ms.inp","r")){
    freopen("ms.inp","r",stdin);
    freopen("ms.out","w",stdout);
  }
  getline(cin,s);
  parse();
}