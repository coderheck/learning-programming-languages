#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;
#define tname "KSTSKX"
#define ll long long 
#define lout(x) \
    cout<<x<<"\n";\
    // cerr<<x<<"\n";
#define oout(x) \
    cout<<x<<" ";\
	// cerr<<x<<" ";
// const ll maxn=200005,inff=1ll<<62;
ll n;string s;
int main(){
	if(fopen(tname".inp","r")){
		freopen(tname".inp","r",stdin);
		// freopen(tname".out","w",stdout);
	}
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
    while(n--){
        cin>>s;
        ll i=0;bool ok=false;
        string num;
        vector<string>nums;
        while(i<s.size()){
            if(isdigit(s[i])){
                num+=s[i];
                ok=true;
            }else{
                while(num[0]=='0' && num.size()){num.erase(0,1);}
                if(num!=""){nums.push_back(num);}else if(ok){nums.push_back("0");}
                num="";
                ok=false;
            }
            i++;
        }
        while(num[0]=='0' && num.size()){num.erase(0,1);}
        if(num!=""){nums.push_back(num);}else if(ok){nums.push_back("0");}
        if(nums.empty()){
            cout<<"0";
            if(n){cout<<"\n";}
            continue;
        }
        for(ll i=0;i<nums.size();i++){
            if(i!=nums.size()-1){
                cout<<nums[i]<<" ";
            }else{
                cout<<nums[i];
            }
        }
        if(n){cout<<"\n";}
    }
}
// yo = gurt
// your = mom
// seg = tree
// code = fire
// status = AC
