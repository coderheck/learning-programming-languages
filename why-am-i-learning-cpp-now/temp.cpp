#include"iostream"
#include"vector"
using namespace std;
#define ll long long
vector<ll>p(2);vector<ll>q;
ll x=1,limit=4;
bool is_prime(ll x){
  for(ll k=2;k<q.size();k++){
    if(x>q[k]) q[k] += p[k];
    if(x==q[k]) return false;
  }
  return true;
}
void genprs(ll n){
  while(p.size()<n){
    do{
      x+=2;
      if(x>=limit){
        p[q.size()+1]=limit;
        limit = p[q.size()+2]*p[q.size()+2];
      }
    }while(not is_prime(x));
    p[p.size()+1]=x;
  }
}
int main(){
  genprs(10);
  for(ll i=0;i<10;i++){cout<<p[i]<<" ";}
}