#include "iostream"
#include "string"
using namespace std;

//nvm structs suck classes are my new love

class lowtiergod {
    public:
        string message;
        string now();
};

string lowtiergod::now(){
    return "NOW!";
}

int main(){
    lowtiergod sayer;
    sayer.message = "kill yourself\n";
    cout<<sayer.message<<sayer.now();
    return 0;
}