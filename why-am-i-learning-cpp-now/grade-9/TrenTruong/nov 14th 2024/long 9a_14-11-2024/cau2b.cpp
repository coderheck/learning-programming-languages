#include"iostream"
#include"vector"
using namespace std;
#define ll long long
ll n,sum=0,cur=1;
int main(){
  if(fopen("cau2b.inp","r")){
    freopen("cau2b.inp","r",stdin);
    freopen("cau2b.out","w",stdout);
  }
  cin>>n;
  while(cur<=n){
    sum+=cur;
    cur++;
    if(cur%5==0){cur++;}
    if(cur%5==3){cur++;}
  }
  cout<<sum;
}