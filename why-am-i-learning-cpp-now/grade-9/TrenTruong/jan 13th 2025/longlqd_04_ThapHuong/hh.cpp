#include"iostream"
using namespace std;
#define ll long long
#define maxN 100
int sumdiv[maxN+5];
int res=0;
void pussy(ll n){
  int r=0;
  while(n!=0){r+=n%10;n/=10;}
  res+=(r==sumdiv[r]);
}
int n;ll a;
int main(){
  for(int i=1;i<=maxN;i++){
    for(int j=i;j<=maxN;j+=i){
      if(j!=i){sumdiv[j]+=i;}
    }
  }
  cin>>n;
  while(n--){
    cin>>a;
    pussy(a);
  }
  cout<<res;
}