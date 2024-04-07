#include"bits/stdc++.h"
#define ll long long
#define kien main
#define kbc ios_base::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
bool checkChiaHet(int x,int y,int z,int num){
  if( (num%x==0) && (num%y==0) && (num%z==0) ){return true;}else{return false;}
}
int kien(){
  kbc;
  if(fopen("bai2b.inp","r")){
    freopen("bai2b.inp","r",stdin);
    freopen("bai2b.out","w",stdout);
  }
  int t;cin>>t;
  for(int i=1;i<=t;i++){
    int x,y,z,n;cin>>x>>y>>z>>n;
    ll base=pow(10,n-1),max=pow(10,n),lol=-1;
    for(ll i=base;i<=max;i++){if(checkChiaHet(x,y,z,i)==true){lol=i;break;}}
    cout<<lol<<"\n";
  }
}
