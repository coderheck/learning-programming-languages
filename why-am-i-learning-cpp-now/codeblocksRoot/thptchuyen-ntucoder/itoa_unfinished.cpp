#include"iostream"
#include"algorithm"
#include"string"
#include"sstream"
using namespace std;
string IntToString(int a){
    stringstream temp;
    temp << a;
    return temp.str();
}
string insertnumber(string s,int val){
    s+=IntToString(val); return s;
}
int main(){
    int n;string s="",s1,s2;cin>>n;int s2i=0;
    for(int i=1;i<=n;i++){int a,b;cin>>a>>b;insertnumber(s,a+b);}
    cout<<s<<"\n";
    for(int i=0;i<n/2;i++){s1[i]=s[i];}
    cout<<s1<<"\n";
    for(int i=n-1;i>=n/2;i--){s2[s2i]=s[i];s2i++;}
    cout<<s2;
}
