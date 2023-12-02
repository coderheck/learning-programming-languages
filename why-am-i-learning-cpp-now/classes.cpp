#include "iostream"
#include "string"
using namespace std;

//nvm structs suck classes are my new love

class lowtiergod {
    public:
        string message;
};

int main(){
    lowtiergod sayer;
    sayer.message = "kill yourself";
    cout<<sayer.message;
    return 0;
}