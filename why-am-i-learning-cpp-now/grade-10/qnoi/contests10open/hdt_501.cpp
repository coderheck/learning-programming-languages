#include <iostream>
using namespace std;
#define ll long long 
ll h,d,cur=0,st=0,res=0;
int main() {
	cin.tie(0)->sync_with_stdio(0);
	cin>>h>>d;
	while(cur<d){
		if(h>0){
			while(h>0){
				cur++,h-=++st,res++;
			}
		}else if(h<=0){
			h++,st=0;
		}
		res++;
	}
	cout<<res;
}
