#include"iostream"
using namespace std;
int n,t;
struct wat{int l,r;}a[1005];
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>t;
  while(t--){
    cin>>n;
    for(int i=0;i<n;i++){cin>>a[i].l>>a[i].r;}
    int t=1,i=0;
    while(i<n){
      if(a[i].r>t){
        cout<<t<<" ";t++;
      }else{cout<<0<<" ";}
      i++;
    }
    cout<<"\n";
  }
}