#include"iostream"
#include"algorithm"
using namespace std;
int timkiemnhiphan(int arr[], int l, int r, int x){
  sort(arr,arr+r);
  if(r>=l){
    int m=l+(r-l)/2;
    if(arr[m]==x){return m;}else{
      if(arr[m]>x){return timkiemnhiphan(arr,l,m-1,x);}
      else{
        return timkiemnhiphan(arr,m+1,r,x);
      }
    }
  }else{return -1;}
}
int main(){
  int a[17]={11,43,5,47,1,13,17,19,23,29,31,37,41,4,7,53,59};
  cout<<timkiemnhiphan(a,0,16,37);
}