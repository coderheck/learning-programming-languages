#include"iostream"
using namespace std;
#define ll long long
int n;ll k,a[1000005],res=0;
void cswsamk(){
  //count subarrays with sum at most k
  int st=0,nd=0;ll s=0;
  for(int i=0;i<n;i++){
    s+=a[i];nd++;
    while(s>k){
      s-=a[st];
      st++;
    }
    res+=(nd-st);
  }
  cout<<res;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n>>k;
  for(int i=0;i<n;i++){cin>>a[i];}
  cswsamk();
}