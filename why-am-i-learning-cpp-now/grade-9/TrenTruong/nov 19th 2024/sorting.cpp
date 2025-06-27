#include"iostream"
#include"algorithm"
#include"vector"
using namespace std;
int n,a,cc=0,cl=0,c=0;
vector<int>chan,le,res;
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a;
    (a%2==0)?chan.push_back(a):le.push_back(a);
  }
  sort(chan.begin(),chan.end());
  sort(le.begin(),le.end());
  while(cc+cl<n){
    if(c%2==0){
      if(cc<chan.size()){
        cout<<chan[cc]<<" ";cc++;c++;
      }else{
        cout<<le[cl]++<<" ";cl++;c++;
      }
    }else{
      if(cl<le.size()){
        cout<<le[cl]<<" ";cl++;c++;
      }else{
        cout<<chan[cc]++<<" ";cc++;c++;
      }
    }
  }
}