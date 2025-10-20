#include"iostream"
#include"map"
using namespace std;
#define ll long long
#define maxN 300000
int n;ll maxL=-1,maxW=-1,a[maxN+5];
map<ll,int>cnt;
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  if(n<4){cout<<-1;return 0;}
  for(int i=0;i<n;i++){
    cnt[a[i]]++;
    if(cnt[a[i]]>=2){
      if(a[i]>maxL){
        maxW=maxL;maxL=a[i];
        cnt[a[i]]-=2;
      }else if(a[i]>maxW){
        maxW=a[i];
        cnt[a[i]]-=2;
      }
    }
  }
  if(maxL==-1||maxW==-1){
    cout<<-1;
  }else{
    cout<<maxL*maxW;
  }
}