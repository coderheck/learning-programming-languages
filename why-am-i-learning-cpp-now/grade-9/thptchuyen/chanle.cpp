#include"stdio.h"
using namespace std;
#define ll long long
ll l,r,ta,tb,es,ee,os,oe;
int main(){
  scanf("%lld%lld",&l,&r);
  es=l+(l&1);ee=r-(r&1);
  os=l+!(l&1);oe=r-!(r&1);
  ta=(es+ee)*((ee-es)/2+1)/2;
  tb=(os+oe)*((oe-os)/2+1)/2;
  printf("%lld",ta-tb);
}