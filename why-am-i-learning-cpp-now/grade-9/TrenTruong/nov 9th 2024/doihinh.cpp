#include"iostream"
#include"algorithm"
#include"map"
#include"vector"
#include"utility"
using namespace std;
int n,h,c=0;
map<int,int>cnt;
vector<pair<int,int>>res;
bool cmpfn(const pair<int,int> &a, const pair<int,int> &b){
  return(a.second==b.second)?a.first<b.first:a.second<b.second;
}
int main(){
  if(fopen("doihinh.inp","r")){
    freopen("doihinh.inp","r",stdin);
    freopen("doihinh.out","w",stdout);
  }
  cin>>n;
  for(int i=1;i<=n;i++){cin>>h;cnt[h]++;}
  for(auto i:cnt){
    if(i.second!=0){
      res.push_back({i.first, i.second});
      c++;
    }
  }
  sort(res.begin(),res.end(),cmpfn);
  cout<<res[c-1].first<<" "<<res[c-1].second;
}