#include"stdio.h"
#include"algorithm"
using namespace std;
long long a[30005],ans[30005];
int n,res=0;
void parse(){
  ans[res++]=a[0];
  for(int i=1;i<n;i++) {
    if(a[i]>ans[res-1]){
      ans[res]=a[i];
      res++;
    }else{
      int l=lower_bound(ans,ans+res,a[i])-ans;
      ans[l]=a[i];
    }
  }
  printf("%d",res);
}
int main(){
  scanf("%d",&n);
  for(int i=0;i<n;i++){scanf("%lld",&a[i]);}
  parse();
}