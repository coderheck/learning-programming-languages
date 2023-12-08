#include "iostream"
using namespace std;
bool isPerfect(long long arg){
    long long sum=0;
    bool isperfect;
    for (long long i=1;i<arg;i++){
        if (arg%i==0){sum+=i;}
    }
    if(arg==sum){isperfect=true;}else{isperfect=false;}
    return isperfect;
}
int main(){
    long long n;
    cin>>n;
    cout<<isPerfect(n);
}