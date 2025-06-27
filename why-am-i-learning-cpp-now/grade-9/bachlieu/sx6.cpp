#include<iostream>
#define ll long long
ll n,a[10005];
void swap(ll &a,ll &b){
  ll tmp=a;a=b;b=tmp;
}
int main(){
  std::cin.tie(0)->sync_with_stdio(0);
  std::cin>>n;
  for(int i=0;i<n;i++){std::cin>>a[i];}
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      if(a[i]>a[j]){swap(a[i],a[j]);}
    }
  }
  for(int i=0;i<n;i++){std::cout<<a[i]<<" ";}
}