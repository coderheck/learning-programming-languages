#include"iostream"
using namespace std;
#define maxN 1000000
int n,s,cnt[maxN+1],a[maxN+1],res=0;
int main(){
  cin>>n>>s;
  cnt[0]=1;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]<=s){
      res+=cnt[s-a[i]];
    }
    cnt[a[i]]++;
  }
  cout<<res;
}