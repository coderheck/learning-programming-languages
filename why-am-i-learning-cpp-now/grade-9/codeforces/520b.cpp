#include<iostream>
using namespace std;
// int gcd(int a,int b){return(b==0)?a:gcd(b,a%b);}
int n,m,c=0;
int main(){
  cin>>n>>m;
  while(m>n){
    c+=1+(m&1);
    m=(m+1)>>1;
  }
  cout<<c+(n-m);
}