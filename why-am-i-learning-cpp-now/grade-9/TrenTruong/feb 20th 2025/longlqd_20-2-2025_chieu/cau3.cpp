#include"iostream"
using namespace std;
#define ll long long
int n,k,a,b,d;bool m[200005];
void wtf(){
  if(a<=n&&b>n){
    if(m[a]^m[b]){if(m[a]){d--;}else{d++;}}
  }
  bool t=m[b];m[b]=m[a];m[a]=t;
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>n>>k;d=n;
  for(int i=1;i<=n;i++){m[i]=true;}
  while(k--){
    cin>>a>>b;
    if(a>b){int t=b;b=a;a=t;}
    wtf();
    cout<<d<<"\n";
  }
}