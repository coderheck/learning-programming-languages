#include"iostream"
using namespace std;
int tongchuso(int arg){
    int n=arg,sum=0;
    while(n!=0){sum+=n%10;n/=10;}
    return sum;
}
int main(){
    freopen("similar.inp","r",stdin);
    freopen("similar.out","w",stdout);
    int l,r,maxHieuHaiSo=INT_MIN; cin>>l>>r;
    for(int i=l;i<=r;i++){
        for(int j=i;j<=r;j++){
            if(tongchuso(i)==tongchuso(j)){
                if(i>j){if(i-j>maxHieuHaiSo){maxHieuHaiSo=i-j;}}else{if(j-i>maxHieuHaiSo){maxHieuHaiSo=j-i;}}
            }
        }
    }
    cout<<maxHieuHaiSo;
}