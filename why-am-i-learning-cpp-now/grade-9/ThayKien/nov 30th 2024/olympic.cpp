#include"iostream"
#include"algorithm"
using namespace std;
#define ll long long
int n,res=0;ll c;
struct ex{ll a,b;}exs[100005];
bool cmpfn(ex a,ex b){
  if(a.a==b.a){
    return(a.b<b.b);
  }else{
    return(a.a<b.a);
  }
}
int main(){
  cin>>n>>c;
  for(int i=0;i<n;i++){
    cin>>exs[i].a>>exs[i].b;
  }
  sort(exs,exs+n,cmpfn);
  for(int i=0;i<n;i++){
    if(exs[i].a<=c){
      res++;c+=exs[i].b;
    }else{
      cout<<res;exit(0);
    }
  }
  cout<<res;
}