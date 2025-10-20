#include"iostream"
#include"map"
using namespace std;
#define maxN 1000000
map<int,int>cnt,cnta,cntb;
int n,m,a[maxN+5],b[maxN+5],hop=0,giao=0;
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<m;i++){cin>>b[i];}
  for(int i=0;i<n;i++){cnt[a[i]]++;cnta[a[i]]++;}
  for(int i=0;i<m;i++){cnt[b[i]]++;cntb[b[i]]++;}
  for(auto d:cnt){
    
    if((cnta[d.second]>=1)&&(cntb[d.second]>=1)){giao++;}
  }
  cout<<cnt.size()<<" "<<giao;
}