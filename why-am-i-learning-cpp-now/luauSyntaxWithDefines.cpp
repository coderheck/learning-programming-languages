#include "stdio.h"
#include "iostream"
#define print printf
#define then {
#define end }
#define else }else{
#define function bool
#define function int
#define do {
#define true (true)

function prime(int n){
    bool p=true;
    if (n<=1) then 
        p=false;
    end
    for (int i=2;i<=n/2;i++) do
        if (n % i == 0) then
            p=false;
        end
    end
    return p;
end

function main(){
    int x;
    while true do
        std::cin>>x;
        if (prime(x) == true) then
            print("is a prime\n");
        else
            print("is not a prime\n");
        end
    end
end