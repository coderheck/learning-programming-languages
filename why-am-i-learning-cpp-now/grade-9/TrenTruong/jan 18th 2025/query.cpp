#include"iostream"
using namespace std;
#define ll long long
#define N 100000
int n,q;ll a[N+5];
// struct ass{int o,s,e;ll x;}z[N+5];
// int main(){
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   cin>>n>>q;
//   for(int i=1;i<=n;i++){cin>>a[i];}
//   for(int i=1;i<=q;i++){
//     cin>>z[i].o;
//     if(z[i].o==1){cin>>z[i].s>>z[i].e>>z[i].x;}
//     if(z[i].o==2){cin>>z[i].s>>z[i].e;}
//   }
//   for(int i=1;i<=q;i++){
//     if(z[i].o==1){
//       for(int j=z[i].s;j<=z[i].e;j++){a[j]+=z[i].x;}
//     }
//     if(z[i].o==2){
//       unsigned ll res=0;
//       for(int j=z[i].s;j<=z[i].e;j++){res+=a[j];}
//       cout<<res<<"\n";
//     }
//   }
// }

struct node{ll sum,val;}treem[4*N+5];
void update(int x,int dau,int cuoi,int l,int r,ll val){
  if(cuoi<l||r<dau){return;}
  if(l<=dau&&cuoi<=r){
    treem[x].val+=val;
    treem[x].sum+=val*(cuoi-dau+1);
    return;
  }
  int mid=dau+(cuoi-dau)/2;
  treem[2*x].val+=treem[x].val;
  treem[2*x].sum+=treem[x].val*(mid-dau+1);
  treem[2*x+1].val+=treem[x].val;
  treem[2*x+1].sum+=treem[x].val*(cuoi-mid);
  treem[x].val=0;
  update(2*x,dau,mid,l,r,val);
  update(2*x+1,mid+1,cuoi,l,r,val);
  treem[x].sum=treem[2*x].sum+treem[2*x+1].sum;
}

ll get(int x,int dau,int cuoi,int l,int r){
  if(r<dau||cuoi<l){return 0;}
  if(l<=dau&&cuoi<=r){return treem[x].sum;}
  int mid=dau+(cuoi-dau)/2;
  treem[2*x].val+=treem[x].val;
  treem[2*x].sum+=treem[x].val*(mid-dau+1);
  treem[2*x+1].val+=treem[x].val;
  treem[2*x+1].sum+=treem[x].val*(cuoi-mid);
  treem[x].val=0;
  ll t1=get(2*x,dau,mid,l,r);
  ll t2=get(2*x+1,mid+1,cuoi,l,r);
  return t1+t2;
}

int main(){
  cin>>n>>q;
  for(int i=1;i<=n;i++){
    ll x;cin>>x;
    a[i]=a[i-1]+x;
  }
  for(int i=1;i<=q;i++){
    int k,l,r,x;
    cin>>k>>l>>r;
    if(k==1){
      cin>>x;
      update(1,1,n,l,r,x);
    }else{
      cout<<get(1,1,n,l,r)+a[r]-a[l-1]<<"\n";
    }
  }
  return 0;
}