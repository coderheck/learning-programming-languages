#include"iostream"
#include"algorithm"
#include"string"
using namespace std;
#define ll long long
string p,s,a;bool d[10];unsigned ll psize;
int nextd(int m){
  for(int i=m;i>=0;i--){
    if(!d[i]){return i;}
  }
}
int main(){
  if(fopen("bai3.inp","r")){
    freopen("bai3.inp","r",stdin);
    freopen("bai3.out","w",stdout);
  }
  cin>>p>>s;psize=p.size();
  for(char c:s){d[c-'0']=true;}
  for(int i=9;i>=0;i--){
    if(!d[i]){
      while(a.size()<psize){a.push_back(i+'0');}
    }
  }
  for(unsigned i=0;i<psize;i++){
    if(a[i]-'0'>p[i]-'0'){
      char d=nextd(p[i]-'0')+'0';
      a[i]=nextd(p[i]-'0')+'0';
      if(a<=p){break;}
    }
  }
  while(a[0]=='0'){a.erase(0,1);}
  (a.size()>0)?cout<<a:cout<<-1;
}
// 20798
// 56
// -> 20798