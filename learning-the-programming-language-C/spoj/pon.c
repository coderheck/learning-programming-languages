#include"stdio.h"
#include"stdint.h"
#include"stdbool.h"
// #include"stdint-gcc.h"
int checks[13]={2,3,5,7,11,13,17,19,23,29,31,37};
uint64_t binpower(uint64_t base, uint64_t e, uint64_t mod) {
    uint64_t result = 1;
    base %= mod;
    while (e) {
        if (e & 1)
            result = (__uint128_t)result * base % mod;
        base = (__uint128_t)base * base % mod;
        e >>= 1;
    }
    return result;
}
bool check_composite(uint64_t n, uint64_t a, uint64_t d, int s) {
    uint64_t x = binpower(a, d, n);
    if (x == 1 || x == n - 1)
        return false;
    for (int r = 1; r < s; r++) {
        x = (__uint128_t)x * x % n;
        if (x == n - 1)
            return false;
    }
    return true;
}
bool MillerRabin(uint64_t n) { // returns true if n is prime, else returns false.
    if(n<2)return false;
    int r=0;uint64_t d=n-1;
    while((d&1)==0){
        d>>=1;r++;
    }
    for(int i=0,a=checks[i];i<13;i++) {
        if (n == a)
            return true;
        if (check_composite(n, a, d, r))
            return false;
    }
    return true;
}
int t;uint64_t n;
int main(){
    scanf("%d",&t);
    while(t--){
        scanf("%llu",&n);
        printf("%s",(MillerRabin(n))?"YES\n":"NO\n");
    }
}