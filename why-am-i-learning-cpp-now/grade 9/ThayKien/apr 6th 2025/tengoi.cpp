#include<iostream>
#include<string>
using namespace std;
#define ll long long
ll n,maxL=0,maxC=0,loc=0;string s;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>n;
  while(n--){
    cin>>s;
    for(ll i=0;i<s.size();i++){
      if(s[i]!='W'&&s[i]!='A'&&s[i]!='R'){
        loc++;
      }else{
        if(loc>maxL){
          maxL=loc;maxC=1;
        }else if(loc==maxL){
          maxC++;
        }
        loc=0;
      }
    }
    if(loc>maxL){
      maxL=loc;maxC=1;
    }else if(loc==maxL){
      maxC++;
    }
    loc=0;
  }
  if(maxL!=0){cout<<maxL<<" "<<maxC;}else{cout<<"NO";}
}