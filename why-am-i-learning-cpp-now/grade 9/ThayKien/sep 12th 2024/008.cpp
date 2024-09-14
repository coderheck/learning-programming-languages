#include"iostream"
using namespace std;
int n,a[101];
bool tgv(int a,int b,int c){
  int asq=a*a,bsq=b*b,csq=c*c;
  return((asq==bsq+csq)||(bsq=asq+csq)||(csq==asq+csq));
}
void parse(){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      for(int k=j+1;k<n;k++){
        if(tgv(a[i],a[j],a[k])){cout<<"YES";return;}
      }
    }
  }
  cout<<"NO";
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  parse();
}