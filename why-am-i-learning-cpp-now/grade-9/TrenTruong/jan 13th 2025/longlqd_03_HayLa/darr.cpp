#include"iostream"
using namespace std;
#define maxN 200000
int n,a[maxN+5],res=0;
int max(int a,int b){return(a>b)?a:b;}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i];}
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(a[i]>=a[j]){res=max(res,a[i]%a[j]);}
    }
  }
  cout<<res;
}
/// ta nhận thấy rằng một số muốn có số dư lớn nhất thì phải xét số đó / 2
/// ví dụ: 5 / 2 = 2; thì số 3 sẽ là số có số dư lớn nhất đối với 5
/// ví dụ: 6 / 2 = 3; thì số 4 sẽ là số có số dư lớn nhất đối với 6
/// bài này sẽ áp dụng phương pháp đó kết hợp với tìm kiếm nhị phân là AC
/// nếu như không nghĩ ra tìm kiếm nhị phân như nào thì nhìn ở dòng thứ 50 nhé