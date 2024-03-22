#include<bits/stdc++.h>
using namespace std;
int main(){
  freopen("bongda.inp","r",stdin);
  freopen("bongda.out","w",stdout);
  int p,q,r,s,u,v,A=0,B=0,C=0;cin>>p>>q>>r>>s>>u>>v;
  if(p>q){A+=3;}else if(p<q){B+=3;}else{A+=1;B+=1;}
  if(r>s){A+=3;}else if(r<s){C+=3;}else{A+=1;C+=1;}
  if(u>v){B+=3;}else if(u<v){C+=3;}else{B+=1;C+=1;}
  cout<<A<<" "<<B<<" "<<C;
}