#include"iostream"
using namespace std;
#define ll long long
bool tcs(ll n){
  int r=0;
  while(n!=0){
    r+=(n%10);
    n/=10;
  }
  return(r==10);
}
int n;
void compute(){
  int a[10005]={19};
  for(int i=1;i<n;i++){
    a[i]=a[i-1]+9;
    while(!tcs(a[i])){a[i]++;}
  }
  cout<<a[n-1];
}
int main(){
  cin>>n;
  compute();
}