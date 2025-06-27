#include"bits/stdc++.h"
using namespace std;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  if(fopen("cau4.inp","r")){
    freopen("cau4.inp","r",stdin);
    freopen("cau4.out","w",stdout);
  }
  int t;cin>>t;
  for(int i=1;i<=t;i++){
    string s;
    bool dai=false,so=false,ch=false,ct=false,db=false;
    cin>>s;
    if(s.size()>=8){dai=true;}
    for(int j=0;j<s.size();j++){
      bool sotam=false,chtam=false,cttam=false;
      if(s[j]>='0' && s[j]<='9'){so=true;sotam=true;}
      if(s[j]>='A' && s[j]<='Z'){ch=true;chtam=true;}
      if(s[j]>='a' && s[j]<='z'){ct=true;cttam=true;}
      if(sotam==chtam && chtam==cttam && cttam==false){db=true;}
    }
    cout<<dai<<" "<<so<<" "<<ch<<" "<<ct<<" "<<db<<"\n";
    if(dai==true && so==true && ch==true && ct==true && db==true){cout<<"Yes\n";}else{cout<<"No\n";}
  }
}
