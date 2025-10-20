#include"iostream"
#include"vector"
#include"algorithm"
using namespace std;
int main(){
    int n;cin>>n;vector<int>c(n);
    for(int i=0;i<n;i++){cin>>c[i];}
    sort(c.begin(),c.end());
    for(int i=0;i<n;i++){cout<<c[i]<<" ";}
    cout<<"\n";
    for(int i=n-1;i>=0;i--){cout<<c[i]<<" ";;}
}