#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
typedef std::vector<int> big;

// READ/WRITE, MISCELLANEOUS FUNCTIONS AND OPERATORS FOR BIG NUMBERS

std::istream &operator >> (std::istream &cin, big &n){
    std::string s;std::cin>>s;
    n.clear();
    for(int i=0;i<s.size();i++){n.push_back(s[i]-'0');}
    return std::cin;
}
std::ostream &operator << (std::ostream &cout, const big &n){
    for(auto d : n){std::cout<<d;}
    return cout;
}
/** Converts an integer into a "number" of the "big" datatype.
* @param n Integer to convert
*/
big int_to_big(int n){
    big c;
    if(n==0){c.push_back(n);return c;}
    while(n){
        c.push_back(n);
        n/=10;
    }
    reverse(c.begin(),c.end());
    return c;
}
void addzero(big &n, int len){
    reverse(n.begin(),n.end());
    while(n.size()<len){n.push_back(0);}
    reverse(n.begin(),n.end());
}
void equalize_length(big &a, big &b){
    int len=std::max(a.size(),b.size());
    addzero(a,len);
    addzero(b,len);
}
void del_leading_zero(big &n){
    reverse(n.begin(), n.end());
    while (n.size() >= 2){
        if(n.back() == 0){n.pop_back();}else{break;}
    }
    reverse(n.begin(), n.end());
}
big operator + (big a, big b){
    equalize_length(a,b);
    int len = a.size();
    big c;int rem=0;
    for(int i=len-1;i>=0;i--){
        int x=a[i]+b[i]+rem;
        rem=x/10;
        x%=10;
        c.push_back(x);
    }
    c.push_back(rem);
    reverse(c.begin(),c.end());
    del_leading_zero(c);
    return c;
}
big operator - (big a, big b){
    equalize_length(a,b);
    int len=a.size();
    big c;int rem=0;
    for(int i=len-1;i>=0;i--){
        int x=a[i]-b[i]-rem;
        if(x<0){x+=10;rem=1;}else{rem=0;}
        c.push_back(x);
    }
    reverse(c.begin(),c.end());
    del_leading_zero(c);
    return c;
}
big operator * (big a, big b){
    reverse(a.begin(),a.end());
    reverse(b.begin(),b.end());
    big c(a.size()+b.size()+1);
    for(int i=0;i<(int)a.size();i++){
        for(int j=0;j<(int)b.size();j++){
            c[i+j]+=(a[i] * b[j]);
            c[i+j+1]+=(c[i+j]/10);
            c[i+j]%=10;
        }
    }
    c.push_back(0);
    for(int i=0;i<(int)c.size()-1;i++){
        c[i+1]+=(c[i]/10);
        c[i]%=10;
    }
    reverse(c.begin(),c.end());
    del_leading_zero(c);
    return c;
}
long long t;
int main(){
  cin.tie(0);ios::sync_with_stdio(0);
  cin>>t;
  while(t--){
    big a,b;
    cin>>a>>b;
    cout<<a*b<<"\n";
  }
}
