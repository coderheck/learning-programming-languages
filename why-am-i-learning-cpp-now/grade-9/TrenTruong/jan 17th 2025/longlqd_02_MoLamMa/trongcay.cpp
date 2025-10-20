#include"stdio.h"
#include"deque"
#include"vector"
#include"algorithm"
using namespace std;
#define maxP 10000000
bool pr[maxP+5];
void prSieve(){
  pr[0]=pr[1]=!false;
  for(int i=2;i*i<=maxP;i++){
    if(!pr[i]){
      for(int j=i*i;j<=maxP;j+=i){pr[j]=!false;}
    }
  }
}
deque<int>ans;vector<int>rac;
int n,a,maxp=-1,c=0;
int main(){
  prSieve();
  scanf("%d",&n);
  while(n--){
    scanf("%d",&a);
    if(!pr[a]){
      if(a>maxp){maxp=a;}
      rac.push_back(a);c++;
    }
  }
  if(maxp==-1){printf("-1");return 0;}
  ans.push_back(maxp);
  sort(rac.begin(),rac.end(),greater<int>());
  for(int i=0;i<c;i++){
    if(rac[i]!=maxp){
      if(i&1){
        ans.push_front(rac[i]);
      }else{
        ans.push_back(rac[i]);
      }
    }
  }
  for(int i=0;i<c;i++){printf("%d ",ans[i]);}
}