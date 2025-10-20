#include"iostream"
#include"map"
using namespace std;
int n,a,maxp=0;
map<int,int>cnt;
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cin>>n;
  while(n--){
    cin>>a;
    if(a>maxp){maxp=a;}
    cnt[a]++;
  }
  cout<<cnt[maxp];
}