#include"iostream"
using namespace std;
#define ll long long
ll gcd(ll a,ll b){return(b==0)?a:gcd(b,a%b);}
ll a,b,c;int res=0;
int main(){
  cin>>a>>b;
  c=gcd(a,b);
  for(ll i=1;i*i<=c;i++){
    if(c%i==0){
      res+=1+(c/i!=i);
    }
  }
  cout<<res;
}