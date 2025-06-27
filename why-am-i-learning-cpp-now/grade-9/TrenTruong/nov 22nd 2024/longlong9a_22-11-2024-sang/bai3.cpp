#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
#define maxN 100000
int n;ll a[maxN+5],b,s=0;
int main(){
  cin>>n>>b;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n,greater<ll>());
  for(int i=0;i<n;i++){
    s+=a[i];
    if(s>=b){cout<<i+1;exit(0);}
  }
}