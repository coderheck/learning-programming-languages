#include"iostream"
#include"map"
using namespace std;
#define ll long long
const int maxN=1000000;
ll a[maxN+5],pos[maxN+5],s=0,maxL=0,l,r;
int n,k;
int main(){
  if(fopen("bai06.inp","r")){
    freopen("bai06.inp","r",stdin);
    freopen("bai06.inp","r",stdout);
  }
  pos[0]=1;
  cin>>n>>k;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    s=(s+a[i]%k)%k;
    if(pos[s]!=0){
      if(s==0){
        maxL=i;l=1;r=i;
      }else if(i-pos[s]>maxL){
        maxL=i-pos[s];
        l=pos[s]+1;r=i;
      }
    }else{pos[s]=i;}
  }
  (l!=0)?cout<<l<<" "<<r:cout<<0;
}