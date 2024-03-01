#include"iostream"
using namespace std;
long long digitsSum(long long arg){
    int n=arg,sum=0;
    while(n!=0){sum+=n%10;n/=10;}
    return sum;
}
long long lcm(long long a, long long b){
    int c=a,d=b;
    while(c!=d){if(c>d){c-=d;}else{d-=c;}}
    if(c==1){return a*b;}else{return a*c;}
}
int main(){
    long long a,b; cin>>a>>b;
    long long a1=digitsSum(a), b1=digitsSum(b);
    cout<<lcm(a1,b1);
}