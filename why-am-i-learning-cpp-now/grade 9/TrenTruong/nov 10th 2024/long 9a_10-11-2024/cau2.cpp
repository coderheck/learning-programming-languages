#include"iostream"
#include"map"
using namespace std;
#define ll long long
#define maxN 300000
int n,k,a[maxN+5];
map<int,int>cnt;
ll res=0;
int main(){
  if(fopen("cau2.inp","r")){
    freopen("cau2.inp","r",stdin);
    freopen("cau2.out","w",stdout);
  }
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>a[i];
    res+=cnt[a[i]];
    if(i>=k){
      cnt[a[i-k]]--;
    }
    cnt[a[i]]++;
  }
  cout<<res;
}
