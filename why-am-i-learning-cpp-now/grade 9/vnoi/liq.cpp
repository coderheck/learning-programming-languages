#include"stdio.h"
#include"algorithm"
using namespace std;
int a[1005],ans[1005],n,res=0;
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
  for(int i=0;i<n;i++){scanf("%d",&a[i]);}
  parse();
}