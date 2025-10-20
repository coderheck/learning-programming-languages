#include"iostream"
#include"algorithm"
using namespace std;
int main(){
  int n = 5, a[n] = {7, 10, 1, 9, 5};
  sort(a,a+n);
  for(int i = 0; i < n; i++){
    cout<<a[i]<<" ";
  }
}