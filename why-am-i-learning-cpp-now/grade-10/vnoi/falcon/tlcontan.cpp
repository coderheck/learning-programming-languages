#include <iostream>
#include <algorithm> // lấy hàm max()
using namespace std;
#define ll long long 
ll n,p,pos[100005];
int main(){
	cin.tie(0)->sync_with_stdio(0);
	cin>>n;
	for(ll i=1;i<=n;i++){
		cin>>p;
		pos[p]=i; // lưu vị trí của p
	}
	ll	res=1, // độ dài đoạn con cần tìm, phần tử đứng riêng lẻ chính là 1 đoạn con hợp lệ
		curL=1; // độ dài đoạn con đang xét hiện tại
	for(ll i=2;i<=n;i++){
		// duyệt theo giá trị của p chứ không theo thứ tự mảng
		if(pos[i]>pos[i-1]){
			// minh họa với mảng giá trị sort từ bé -> lớn: ..., p_(i-1), ..., p_i, ...
			// nếu đúng thì mở rộng độ dài đoạn con đang xét hiện tại 
			curL++;
			res=max(res,curL); // lưu max của độ dài đoạn con cần tìm với độ dài đoạn con hiện tại
		}else{ 
			curL=1; // reset độ dài đoạn con đang xét về 1
		}
	}
	cout<<n-res;
}
