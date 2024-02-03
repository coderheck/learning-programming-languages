#include"iostream"
#include"cmath"
#include"string"
using namespace std;
struct dead{
    string time="19:20";
    string name="loxzy";
    string reason="played too much ToIF";
};

class loxzyioxzy{
private:
    string thing="what the fuck";
public:
    void say(){cout<<thing;};
    void compute(int num1, int num2, char sign){
        if(num1==2&&num2==2&&sign=='+'){cout<<5;}else
        if(sign=='+'){cout<<num1+num2;}else
        if(sign=='-'){cout<<num1-num2;}else
        if(sign=='*'){cout<<num1*num2;}else
        if(sign=='/'){cout<<num1/num2;}else
        if(sign=='^'){long long n=num1;for(int i=1;i<num2;i++){n*=num1;}cout<<n;}
    };
};

dead guy;
loxzyioxzy loxzy;
int main(){
    cout<<guy.name<<" died at "<<guy.time<<" for: \'"<<guy.reason<<"\'"<<"\n";
    loxzy.say(); cout<<"\n";
    loxzy.compute(3,3,'^');
}