#include"iostream"
using namespace std;
#define ll long long
#define ld long double
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll a,b,c;
struct frac{
  ll first,second;ld res;
}minFrac;
frac min(frac a,frac b){
  return(a.res<b.res)?a:b;
}
void compute(){
  frac ab,ba,ac,ca,bc,cb;
  ab.first=a,ab.second=b,ab.res=a*1.0/b;
  ba.first=b,ba.second=a,ba.res=b*1.0/a;
  ac.first=a,ac.second=c,ac.res=a*1.0/c;
  ca.first=c,ca.second=a,ca.res=c*1.0/a;
  bc.first=b,bc.second=c,bc.res=b*1.0/c;
  cb.first=c,cb.second=b,cb.res=c*1.0/b;
  minFrac=min(ab,min(ba,min(ac,min(ca,min(bc,cb)))));
  cout<<minFrac.first/gcd(minFrac.first,minFrac.second)
    + minFrac.second/gcd(minFrac.first,minFrac.second);
}
int main(){
  if(fopen("cau1a.inp","r")){
    freopen("cau1a.inp","r",stdin);
    freopen("cau1a.out","w",stdout);
  }
  cin>>a>>b>>c;
  compute();
}