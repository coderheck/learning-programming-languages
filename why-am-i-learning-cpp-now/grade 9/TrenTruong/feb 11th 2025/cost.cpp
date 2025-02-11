#include"iostream"
using namespace std;
#define ll long long
int min(const int &a,const int &b){return(a<b)?a:b;}
int n,a,b,p,minprice;ll res=0;
int main(){
  cin>>n>>a>>b;minprice=min(a,b);
  while(n--){
    cin>>p;res+=(p&1)?minprice:a+b;
  }
  cout<<res;
}