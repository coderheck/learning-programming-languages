#include"iostream"
using namespace std;
#define ll long long
#define maxN 1000000
int cnt[maxN+5],a,maxP=0,n;
int main(){
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a;
    cnt[a]++;
    if(a>maxP){maxP=a;}
  }
  cout<<cnt[maxP];
}