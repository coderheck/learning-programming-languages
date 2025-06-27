#include"iostream"
#include"algorithm"
#include"functional"
using namespace std;
int min(const int &a,const int &b){return(a<b)?a:b;}
int max(const int &a,const int &b){return(a>b)?a:b;}
int m,n,p[100005],minpicks;int res=0;
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  cin>>m>>n;minpicks=min(m,n);
  for(int i=0;i<m;i++){cin>>p[i];}
  sort(p,p+m,greater<int>());
  for(int i=0;i<minpicks;i++){res=max(res,p[i]*(i+1));}
  cout<<res;
}