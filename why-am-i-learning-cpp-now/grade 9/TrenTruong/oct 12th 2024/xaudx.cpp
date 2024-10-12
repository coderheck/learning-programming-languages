#include"iostream"
#include"string"
using namespace std;
string s;
int res=1;
int max(int a,int b){return(a>b)?a:b;}
void checkle(int i){
  int m=0;
  while(s[i-m-1]==s[i+m+1]){m++;}
  res=max(res,1+m*2);
}
void checkchan(int i){
  int m=0;
  while(s[i-m-1]==s[i+m+2]){m++;}
  res=max(res,2+m*2);
}
int main(){
  if(fopen("xaudx.inp","r")){
    freopen("xaudx.inp","r",stdin);
    freopen("xaudx.out","w",stdout);
  }
  cin>>s;
  for(int i=0;i<s.size();i++){
    checkle(i);
    if(s[i]==s[i+1]){checkchan(i+1);}
  }
  cout<<res;
}