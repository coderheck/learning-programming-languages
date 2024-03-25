#include<iostream>
#include<algorithm>
#define ull unsigned long long
using namespace std;
int main(){
  int n;cin>>n;int ab[n*2];
  for(int i=0;i<n*2;i++){cin>>ab[i];}
  sort(ab,ab+(n*2));
  for(int i=n*2-1;i>=0;i--){cout<<ab[i]<<" ";}
}
