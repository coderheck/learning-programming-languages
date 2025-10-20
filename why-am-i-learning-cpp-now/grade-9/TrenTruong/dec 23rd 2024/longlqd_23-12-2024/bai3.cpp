#include<iostream>
#include"algorithm"
using namespace std;
int n,d,res=0,a[200005];
int main(){
  cin>>n>>d;
  for(int i=0;i<n;i++){cin>>a[i];}
  sort(a,a+n);
  for(int i=0;i<n;i++){
    if(abs(a[i]-a[i+1])<=d){
      res++;i++;
    }
  }
  cout<<res;
}