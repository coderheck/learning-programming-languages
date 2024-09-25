#include"iostream"
#include"string"
#include"climits"
using namespace std;
int n,maxLen=INT_MIN;string s;
bool FUCKYOUKIEN(int i,int j){
  while(i!=j){
    if(s[i]!=s[j]){return false;}
    i++;j--;
  }
  return true;
}
void KIENBIGCOCK(){
  for(int i=0;i<n;i++){
    for(int j=n-1;j>=i;j--){
      if(FUCKYOUKIEN(i,j)){
        int len=j-i;
        (len>maxLen)?maxLen=len:maxLen=maxLen;
      }
    }
  }
  cout<<maxLen+1;
}
int main(){
  if(fopen("palindstr.inp","r")){
    freopen("palindstr.inp","r",stdin);
    freopen("palindstr.out","w",stdout);
  }
  cin>>n>>s;
  KIENBIGCOCK();
}