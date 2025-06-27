#include<stdio.h>
#define ll long long
ll a[100005],n;bool mark1[100005],mark2[100005];
int main(){
  scanf("%lld",&n);
  for(ll i=0;i<n;i++){
    scanf("%lld",&a[i]);
    if(!(a[i]%3)){mark1[i]=true;}
    if(!(a[i]%5)){mark2[i]=true;}
  }
  for(ll i=0;i<n;i++){if(!mark1[i]){printf("%lld ",a[i]);}}
  printf("\n");
  for(ll i=0;i<n;i++){if(!mark1[i]&&!mark2[i]){printf("%lld ",a[i]);}}
}
