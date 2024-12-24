#include"iostream"
using namespace std;
#define ll long long
int n,k;ll a[1000005];
int main(){
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>a[i];}
  k%=n;cout<<a[k];
}