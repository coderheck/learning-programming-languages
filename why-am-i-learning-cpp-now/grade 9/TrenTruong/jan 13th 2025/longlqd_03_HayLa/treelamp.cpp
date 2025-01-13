#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
#define ll long long
int n;ll h[100005];
vector<ll>ans;
int main(){
  ans.reserve(100005);
  cin>>n;
  for(int i=0;i<n;i++){cin>>h[i];}
  ans.push_back(h[0]);
  for(int i=1;i<n;i++){
    if(h[i]>ans.back()){
      ans.push_back(h[i]);
    }else{
      int p=lower_bound(ans.begin(),ans.end(),h[i])-ans.begin();
      ans[p]=h[i];
    }
  }
  cout<<ans.size();
}