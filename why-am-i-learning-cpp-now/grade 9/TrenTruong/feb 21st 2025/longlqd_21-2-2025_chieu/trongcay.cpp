#include<iostream>
#include<string>
#include<climits>
#include<cmath>
using namespace std;
int max(int a,int b){return(a>b)?a:b;}
int min(int a,int b){return(a<b)?a:b;}
int k,n,res=INT_MAX,pos[100005],posc=0;string s;
int main(){
  cin>>n>>k>>s;
  for(int i=0;i<s.size();i++){
    if(s[i]=='0'){pos[posc++]=i;}
  }
  for(int i=0;i+k-1<posc;i++){
    int l=pos[i],
        r=pos[i+k-1],
        m=pos[(i+i+k-1)/2],
        imax=max(abs(l-m),abs(r-m));
    res=min(imax,res);
  }
  cout<<res;
}