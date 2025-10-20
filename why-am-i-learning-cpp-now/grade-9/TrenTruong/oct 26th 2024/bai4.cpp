#include"iostream"
#include"cstdlib"
#include"ctime"
using namespace std;
#define ll long long
#define maxN 100000
ll a[maxN];int n,ans;
int main(){
  if(fopen("bai4.inp","r")){
    freopen("bai4.inp","r",stdin);
    freopen("bai4.out","w",stdout);
  }
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  srand(time(0));
  cout<<rand()%(n+1);
}