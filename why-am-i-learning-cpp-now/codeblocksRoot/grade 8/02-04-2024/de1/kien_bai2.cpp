#include <bits/stdc++.h>
using namespace std;
long long f[10000001],L,R,dem;
void ktra(){
  for (int i = 1; i <= 10000000; i++){f[i] = true;}
  f[0] = false; f[1] = false;
  for (int i = 2; i*i <= 10000000; i++){
    if (f[i] == true){
      for (int j = i*i; j<=10000000; j+=i){f[j] = false;}
    }
  }
}
int tinh(int number) {
  int sum = 0;
  while (number != 0) {
    int digit = number % 10;
      sum += digit;
      number /= 10;
  }
  return sum;
}
int main() {
  ktra();
  long long x;
  long long n;
  cin >> L >> R;
  for (int i = L; i <= R; i++){
    if (f[i] == true){
      if (tinh(i) % 5 == 0){dem++;}
    }
  }
  cout << dem;
  return 0;
}
