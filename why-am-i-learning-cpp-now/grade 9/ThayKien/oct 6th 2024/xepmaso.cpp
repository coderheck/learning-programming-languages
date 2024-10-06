#include"iostream"
#include"algorithm"
#include"utility"
using namespace std;
#define maxN 100000
struct CHILDREN{
  int id;int score;
}a[maxN];
int n;
bool compfn(const CHILDREN &a1,const CHILDREN &a2){
  if(a1.score==a2.score)
    return a1.id<a2.id;
  return a1.score>a2.score;
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){cin>>a[i].id>>a[i].score;}
  sort(a,a+n,compfn);
  for(int i=0;i<n;i++){cout<<a[i].id<<" "<<a[i].score<<"\n";}
}