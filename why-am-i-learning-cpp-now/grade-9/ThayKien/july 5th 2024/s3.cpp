#include"bits/stdc++.h"
#define ll long long
using namespace std;
int main(){
  double s3=0; ll a,n=1;
  cin>>a;
  while(n*1.0/(a+n)>=0.0001){
    s3+=n*1.0/(a+n);
    n++;
  }
  cout<<setprecision(4)<<s3;
}
