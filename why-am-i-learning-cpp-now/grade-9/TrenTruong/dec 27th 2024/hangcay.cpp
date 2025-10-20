#include"iostream"
using namespace std;
#define maxN 2000
int max(int a,int b){return(a>b)?a:b;}
int min(int a,int b){return(a<b)?a:b;}
int m,n,res=0,trees[maxN+5];
struct sprinkler{int pos,rad;}a[maxN+5];
int main(){
  cin>>n>>m;
  for(int i=1;i<=n;i++){trees[i]=0;}
  for(int i=0;i<m;i++){cin>>a[i].pos>>a[i].rad;}
  for(int i=0;i<m;i++){
    for(int j=max(1,a[i].pos-a[i].rad);j<=min(n,a[i].pos+a[i].rad);j++){
      trees[j]++;
    }
  }
  for(int i=1;i<=n;i++){
    res+=(trees[i]>0);
  }
  cout<<res;
}