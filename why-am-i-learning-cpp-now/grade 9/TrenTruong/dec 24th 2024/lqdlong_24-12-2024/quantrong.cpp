#include"iostream"
using namespace std;
int n,ans=0,a[500005],pos[500005],s[500005];
int max(int a,int b){return(a>b)?a:b;}
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    s[i]=s[i-1]+a[i];
  }
  for(int i=1;i<=n;i++){
    if(pos[a[i]]){ans=max(ans,s[i]-s[pos[a[i]]-1]);}
    if(!pos[a[i]]){pos[a[i]]=i;}
  }
  cout<<ans;
}