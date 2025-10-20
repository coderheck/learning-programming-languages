#include<iostream>
using namespace std;
#define ll long long
ll n,k;
int main(){
  cin>>n>>k;
  if(n==1){
    cout<<k+1;
  }else{
    cout<<k+(k-1)/(n-1);
  }
}
