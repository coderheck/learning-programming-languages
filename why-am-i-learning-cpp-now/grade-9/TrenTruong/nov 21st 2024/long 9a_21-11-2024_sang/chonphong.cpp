#include<iostream>
#define mod 1000000007
using namespace std;
int n,k,ans=10000000;
string s;
void room(){
  int tchr,dem=0;
  for(int i=0;i<n;i++){
    if(s[i]=='0'){
      dem++;
      if(dem==k/2+1){tchr=i;break;}
    }
  }
  dem=-1;
  int l=0,r=0;
  while(s[l]=='1'&&l<n){l++;}
  r=l;
  while(dem<k&&r<n){if(s[r]=='0'){dem++;}r++;}
  r--;
  while(r<n){
    ans=min(ans,max(r-tchr,tchr-l));
    tchr++;
    while(s[tchr]!='0'){tchr++;}
    if(k%2==1){ans=min(ans,max(r-tchr,tchr-l));}
    l++;
    while(s[l]=='1'&&l<n){l++;}
    r++;
    while(s[r]=='1'&&r<n){r++;}
  }
  cout<<ans;
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>k;
  cin>>s;
  room();
}