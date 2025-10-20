#include"iostream"
using namespace std;
void givepoint(int &a,int &b,int x,int y){
  if(x>y){
    a+=3;
  }else if(x<y){
    b+=3;
  }else{a++;b++;}
}
int p,q,r,s,u,v,a=0,b=0,c=0;
void parse(){
  givepoint(a,b,p,q);
  givepoint(a,c,r,s);
  givepoint(b,c,u,v);
  cout<<a<<" "<<b<<" "<<c;
}
int main(){
  cin>>p>>q>>r>>s>>u>>v;
  parse();
}