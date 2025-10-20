#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,x,res=0;
    pair<long long,long long>a[106];
    cin>>x>>n;
    for(int i=0;i<n;i++){cin>>a[i].first>>a[i].second;}
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i].second<x){
            long long t=a[i].first*a[i].second;
            x=x-a[i].second;
            res=res+t;
        }
        else{res=res+x*a[i].first; break;}
    }
    cout<<res;
    return 0;
}

/*

gọi tổng là "sum"

input:
dòng đầu: n, m với n là số trứng cần mua, m là số dòng
các dòng tiếp theo: a, b với a là giá quả trứng sẽ cộng với sum, b là số trứng tối đa mà người đó cho mua

output: sum bé nhất

*/

/*

INPUT
12 3      (cần mua 12 quả, 3 người bán)
5 8       (ông này bán 8 quả, mỗi quả có giá = 5)
6 10      (ông này bán 10 quả, mỗi quả có giá = 6)
8 11      (ông này bán 11 quả, mỗi quả có giá = 8)

OUTPUT
35        (số tiền phải trả nhỏ nhất)

*/