#include"iostream"
#include"algorithm"
#include"string"
using namespace std;
#define ll long long
#define maxN 1000000
ll n,maxScore,res=-1;
struct st{
  ll pos;ll score;
};
bool comp1(const st &a1,const st &a2){
  if(a1.score!=a2.score)
    return a1.score<a2.score;
  return a1.pos>a2.pos;
}
int main(){
  cin>>n;
  st a[n];
  for(ll i=0;i<n;i++){cin>>a[i].score;a[i].pos=i+1;}
  sort(a,a+n,comp1);
  maxScore=a[n-1].score;
  for(ll i=n-1;i>=0;i--){
    if(a[i].score!=maxScore){res=a[i].score;break;}
  }
  cout<<res<<"\n";
  cout<<a[n-1].pos<<" "<<a[n-2].pos<<"\n";
}