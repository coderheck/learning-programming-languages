#include"iostream"
using namespace std;
#define maxN 100000
int a,b;
int tUoc(int x){
  int r=0;
  for(int i=2;i*i<=x;i++){
    if(x%i==0){
      r+=i;
      if(i!=x/i){r+=x/i;}
    }
  }
  return r+1;
}
int main(){
  scanf("%d%d",&a,&b);
  printf("%s",(tUoc(a)==b&&tUoc(b)==a)?"YES":"NO");
}