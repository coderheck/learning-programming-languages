#include"iostream"
#include"string"
#include"cstring"
using namespace std;
int main(){
    string s;
    getline(cin, s);
    cout<<s<<"\n";
    s.insert(s.begin() + 2, 2, 'l');
    cout<<s<<" "<<s[3];
}