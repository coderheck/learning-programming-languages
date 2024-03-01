#include <iostream>
#include <cmath>

bool isPrime(long long n){
    bool isprime=true;
    if(n<=1){isprime=false;}
    for(long long i=2;i<=n/2;i++){
        if(n%i==0){isprime=false;}
    }
    return isprime;
}
long long digitsSum(long long arg){
    int n=arg,sum=0;
    while(n!=0){sum+=n%10;n/=10;}
    return sum;
}
bool isSquare(long long a){
    bool s;
    if(floor(sqrt(a))==sqrt(a)&&ceil(sqrt(a))==sqrt(a)){s=true;}else{s=false;}
    return s;
}
long long reverseDigits(long long arg){
    long long n=arg,digit,rev=0;
    while(n>0){rev*=10;digit=n%10;rev+=digit;n/=10;}
    return rev;
}
bool isPerfect(long long arg){
    long long sum=0;bool isperfect;
    for (long long i=1;i<arg;i++){if(arg%i==0){sum+=i;}}
    if(arg==sum){isperfect=true;}else{isperfect=false;}
    return isperfect;
}
int gcd(int a, int b){
    int c=a,d=b;
    while(c!=d){if(c>d){c-=d;}else{d-=c;}}
    return c;
}
int lcm(int a, int b){
    int c=a,d=b;
    while(c!=d){if(c>d){c-=d;}else{d-=c;}}
    if(c==1){return a*b;}else{return a*c;}
}
int countDigits(int a){
    int b=a,c=0;
    while(b>0){b/=10;c++;}
    return c;
}
float heron(int a, int b, int c){
    float s=(a+b+c)/2.0; // chia cho 2.0 moi dc 🤯
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
void countSort(int array[], int size) {
  int output[10], count[10], max = array[0];
  // find max
  for (int i=1; i<size; i++) {
    if(array[i]>max){max=array[i];}
  }
  // init array with zeroes
  for (int i=0; i<=max; i++) {
    count[i]=0;
  }
  // count each element
  for (int i=0; i<size; i++) {
    count[array[i]]++;
  }
  // total count of each array
  for (int i=1; i<=max; i++) {
    count[i]+=count[i - 1];
  }
  for (int i=size-1; i>=0; i--) {
    output[count[array[i]]-1]=array[i];
    count[array[i]]--;
  }
  // replace given array
  for (int i = 0; i < size; i++) {
    array[i]=output[i];
  }
}
int main(){
    int x,y;std::cin>>x>>y;
    std::cout<<lcm(x,y);
}