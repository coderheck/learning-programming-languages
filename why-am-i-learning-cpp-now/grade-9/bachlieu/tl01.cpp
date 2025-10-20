#include"iostream"
#include"algorithm"
using namespace std;
const int maxN=1000000;
int n,s,c=0;
struct dragon{int x,y;}a[maxN+5];
bool cmpfn(const dragon &a,const dragon &b){
  if(a.x==b.x){
    return(a.y>b.y);
  }else{
    return(a.x<b.x);
  }
}
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin>>s>>n;
  for(int i=0;i<n;i++){cin>>a[i].x>>a[i].y;}
  sort(a,a+n,cmpfn);
  while(c<n){
    if(s>a[c].x){
      s+=a[c].y;c++;
    }else{cout<<"NO "<<n-c;exit(0);}
  }
  cout<<"YES";
}