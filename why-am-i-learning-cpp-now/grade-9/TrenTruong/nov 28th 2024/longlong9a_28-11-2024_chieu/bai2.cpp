#include"iostream"
using namespace std;
#define maxN 10000000
int a,b,cnt[maxN+5];
int revn(int n){
  int r=0;
  while(n!=0){r=r*10+n%10;n/=10;}
  return r;
}
int countPrimeDivs(int n){
  int r=0;
  while(n%2==0){r=1;n/=2;}
  for(int i=3;i*i<=n;i+=2){
    if(n%i==0){
      r++;
      while(n%i==0){n/=i;}
    }
  }
  if(n>2){r++;}
  return r;
}
void preproc(){
  for(int i=1;i<=maxN;i++){
    cnt[i]=cnt[i-1];
    cnt[i]+=(revn(i)==i&&countPrimeDivs(i)>=3);
  }
}
int main(){
  preproc();
  cin>>a>>b;
  cout<<cnt[b]-cnt[a-1];
}