#include"iostream"
using namespace std;
#define maxN 2000
int max(int a,int b){return(a>b)?a:b;}
int min(int a,int b){return(a<b)?a:b;}
struct sprinkler{int pos,r;}q[maxN+5];
int n,m,trees[maxN+5],res=0;
int main(){
  for(int i=0;i<=maxN;i++){trees[i]=0;}
  cin>>n>>m;
  for(int i=0;i<m;i++){cin>>q[i].pos>>q[i].r;}
  for(int i=0;i<m;i++){
    int pos=q[i].pos,r=q[i].r;
    for(int j=max(1,pos-r);j<=min(n,pos+r);j++){
      trees[j]++;
    }
  }
  for(int i=1;i<=n;i++){
    res+=(trees[i]>0);
  }
  cout<<res;
}