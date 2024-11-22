#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
#define maxN 8500
int n,res=0;ll a[maxN+5];
void proc(){
  for(int i=n-1;i>=2;i--){
    int l=0,r=i-1;
    while(l<r){
      if(a[l]+a[r]>a[i]){
        res+=(r-l);r--;
      }else{l++;}
    }
  }
  cout<<res;
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  proc();
}