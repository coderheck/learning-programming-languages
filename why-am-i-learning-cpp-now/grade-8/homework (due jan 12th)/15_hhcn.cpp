#include"bits/stdc++.h"
using namespace std;
int main(){
    int s1,s2,s3;cin>>s1>>s2>>s3; long long v=sqrt(s1*s2*s3); float a=v/s1, b=v/s2, c=v/s3;
    cout<<4*(a+b+c);
}