#include<iostream>
#include <algorithm>
using namespace std;
#define ll long long
ll n;string s;
int main(){
  cin>>n>>s;
  next_permutation(s.begin(),s.end());
  cout<<s;
}
