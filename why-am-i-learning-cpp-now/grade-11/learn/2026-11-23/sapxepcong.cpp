#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define tname "sapxepcong"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>s;
	ll num=0;
	vector<ll>nums;
	for(const char &c:s){
		if(c=='+'){
			if(num){
				nums.push_back(num);
				num=0;
			}
		}else{
			num=num*10+(c-'0');
		}
	}
	if(num){nums.push_back(num);}
	sort(nums.begin(),nums.end());
	for(ll i=0;i<(ll)nums.size();i++){
		if(i>0){cout<<'+';}
		cout<<nums[i];
	}
}
//     yo = gurt
//   your = mom
//    seg = tree
//   code = blocks
// status = AC
