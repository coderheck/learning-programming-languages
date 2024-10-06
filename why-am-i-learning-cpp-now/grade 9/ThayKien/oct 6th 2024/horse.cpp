#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
#define maxN 100000
int n,it=0,c=0;ll a[maxN],b[maxN];
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){cin>>b[i];}
  sort(a,a+n/2,greater<ll>());sort(b,b+n/2);
  for(int i=0;i<n;i++){cout<<a[i]<<" ";}
  cout<<"\n";
  for(int i=0;i<n;i++){cout<<b[i]<<" ";}
  while(it<n){
    if(a[it]>b[it]){c++;it++;}else{it++;}
  }
  cout<<"\n"<<c;
}