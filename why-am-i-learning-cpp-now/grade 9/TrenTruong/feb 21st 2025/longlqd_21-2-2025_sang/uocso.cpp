#include<iostream>
using namespace std;
#define maxN 1000000
int t,a;int divc[maxN+5];
void demuoc(){
  int r=0;
  for(int i=1;i*i<=a;i++){
    if(a%i==0){
      r+=1+(i!=a/i);
    }
  }
  cout<<r<<"\n";
}
int main(){
  ios::sync_with_stdio(0);cin.tie(0);
  for(int i=1;i<=maxN;i++){
    for(int j=i;j<=maxN;j+=i){divc[j]++;}
  }
  cin>>t;
  while(t--){
    cin>>a;
    if(a>maxN){demuoc();}else{cout<<divc[a]<<"\n";}
  }
}