#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
#define maxN 100000
unsigned ll res=0;
int n,m;
struct p {
  int cs;
  ll val;
} a[maxN],b[maxN];
bool isGreater(const p &p1,const p &p2){
  return p1.val < p2.val;
}
bool isSmaller(const p &p1,const p &p2){
  return p1.val > p2.val;
}
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i].val;a[i].cs=i+1;}
  for(int i=0;i<m;i++){cin>>b[i].val;b[i].cs=i+1;}
  sort(b,b+m,isGreater);sort(a,a+n,isSmaller);
  for(int i=0;i<n;i++){res+=a[i].val*b[i].val;}
  printf("%lld\n",res);
  for(int i=0;i<n;i++){cout<<a[i].cs<<" ";}
  cout<<"\n";
  for(int i=0;i<n;i++){cout<<b[i].cs<<" ";}
}