#include"iostream"
#include"windows.h"
using namespace std;
#define maxN 1000000
bool tri[maxN+1];
void spawntri(){
  int cur=1,iter=2;
  while(cur<=maxN){
    tri[cur]=true;
    cur=iter*(iter+1)/2;
    iter++;
  }
}
int n;
int main(){
  spawntri();
  cin>>n;cout<<tri[n];
}
