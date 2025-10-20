#include"iostream"
using namespace std;
int a[1000],n,m;
void parse(){
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
      if(a[i]+a[j]==m){cout<<i+1<<" "<<j+1;return;}
    }
  }
  cout<<-1;
}
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){cin>>a[i];}
  parse();
}