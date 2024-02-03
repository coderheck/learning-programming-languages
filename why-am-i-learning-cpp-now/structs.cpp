#include"iostream"
#include"cmath"
#include"string"
using namespace std;
struct dead
{
    string time="19:20";
    string name="loxzy";
    string reason="played too much ToIF";
};
dead loxzy;
int main(){
    cout<<loxzy.name<<" died at "<<loxzy.time<<" for: \'"<<loxzy.reason<<"\'";
}