#include"iostream"
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
deque<int>test;vector<int>rac;
int n,a,maxp=-1,c=0;
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  prSieve();
  cin>>n;
  while(n--){
    cin>>a;
    if(!pr[a]){
      if(a>maxp){maxp=a;}
      rac.push_back(a);c++;
    }
  }
  if(maxp==-1){cout<<maxp;return 0;}
  test.push_back(maxp);
  sort(rac.begin(),rac.end(),greater<int>());
  for(int i=0;i<c;i++){
    if(rac[i]!=maxp){
      if(i%2==0){
        test.push_back(rac[i]);
      }else{
        test.push_front(rac[i]);
      }
    }
  }
  for(int i=0;i<c;i++){
    cout<<test[i]<<" ";
  }
}