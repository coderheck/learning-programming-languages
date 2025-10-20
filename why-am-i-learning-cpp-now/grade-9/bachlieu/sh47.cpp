#include"stdio.h"
using namespace std;
#define ll long long
#define maxN 1000000
struct Q{int a,b;}input[200005];
int divs[maxN+1],t,res=0,valid[maxN+1];
bool pr[maxN+1];
void countDivsOfNums(){
  for(int i=0;i<=maxN;i++){divs[i]=0;}
  for(int i=1;i<=maxN;i++){
    for(int j=i;j<=maxN;j+=i){divs[j]++;}
  }
}
void prSieve(){
  for(int i=2;i<=maxN;i++){pr[i]=true;}
  pr[0]=pr[1]=false;
  for(int i=0;i*i<=maxN;i++){
    if(pr[i]){
      for(int j=i*i;j<=maxN;j+=i){pr[j]=false;}
    }
  }
}
void preproc(){
  for(int i=1;i<=maxN;i++){
    if(pr[divs[i]]){valid[i]=1;}
    valid[i]+=valid[i-1];
  }
}
void parse(){
  for(int i=0;i<t;i++){
    printf("%d\n",valid[input[i].b]-valid[input[i].a-1]);
  }
}
int main(){
  scanf("%d",&t);
  prSieve();countDivsOfNums();preproc();
  for(int i=0;i<t;i++){
    scanf("%d%d",&input[i].a,&input[i].b);
  }
  parse();
}