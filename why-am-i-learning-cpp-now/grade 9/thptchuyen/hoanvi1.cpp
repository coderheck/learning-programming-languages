#include"iostream"
using namespace std;
#define MAX 10
int n,a[MAX];bool boolArr[MAX]={false};
void permute(int k){
  for(int i=1;i<=n;i++){
    if(!boolArr[i]){
      a[k]=i;
      boolArr[i]=true;
      if(k==n){
        for(int j=1;j<=n;j++){cout<<a[j]<<" ";}
        cout<<"\n";
      }else permute(k+1);
      boolArr[i]=false;
    }
  }
}
int main(){
  cin>>n;
  permute(1);
}
