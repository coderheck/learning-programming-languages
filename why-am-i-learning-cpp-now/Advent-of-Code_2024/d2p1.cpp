#include"iostream"
#include"cstring"
#include"sstream"
#include"string"
#include"cmath"
using namespace std;
int Q=1000,a[8],n,c=0,res=0,linecount=1;
string line;
int max(int a,int b){return(a>b)?a:b;}
bool isAscend(int l,int r){
  while(r<c){
    if(a[l]>=a[r]){return false;}
    l++;r++;
  }
  return true;
}
bool isDescend(int l,int r){
  while(r<c){
    if(a[l]<=a[r]){return false;}
    l++;r++;
  }
  return true;
}
bool IsAscendOnlyOrDescendOnly(){
  int l=0,r=1;
  if(a[l]<a[r]){
    l++;r++;
    return isAscend(l,r);
  }else if(a[l]>a[r]){
    l++;r++;
    return isDescend(l,r);
  }else{return false;}
}
bool maxdiff(){
  int maxd=1;
  for(int j=1;j<c;j++){
    maxd=max(maxd,abs(a[j]-a[j-1]));
  }
  return(maxd>=1&&maxd<=3);
}
int main(){
  freopen("d2.inp","r",stdin);
  while(Q--){
    memset(a,-1,sizeof(a));
    getline(cin,line);
    stringstream ss(line);
    while(ss>>n){a[c++]=n;}
    res+=(IsAscendOnlyOrDescendOnly()&&maxdiff());
    c=0;linecount++;
  }
  cout<<res;
}