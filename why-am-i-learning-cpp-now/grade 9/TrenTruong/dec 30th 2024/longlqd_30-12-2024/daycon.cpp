#include"iostream"
#include"algorithm"
using namespace std;
#define maxN 10000000
#define ll long long
int n,a[maxN+5],res=0;
ll m,t=0;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i];}
  int l=0,r=0;
  while(r<n){
    if(t+a[r]>m){
      res+=r-l;
      t-=a[l];l++;
    }else{
      t+=a[r];r++;
    }
  }
  res+=r-l;cout<<res;
}