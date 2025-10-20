#include"iostream"
#include"cstdint"
#include"climits"
using namespace std;
using u64 = uint64_t;
__int128 bigassnumber = LLONG_MAX+2;
void printBigNum(__int128 x) {
  if(x<0){
    putchar('-');
    x=-x;
  }
  if(x>9)printBigNum(x / 10);
  putchar(x%10+'0');
}
int main(){
  printBigNum(bigassnumber);
}