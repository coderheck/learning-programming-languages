#include"iostream"
#include"math.h"
using namespace std;
bool isSquare(long long a){
    bool s;
    if(floor(sqrt(a))==sqrt(a)&&ceil(sqrt(a))==sqrt(a)){s=true;}else{s=false;}
    return s;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for(int i=1;i<15;i++){
        if(i%7==0){cout<<i<<" ";}
    }
}