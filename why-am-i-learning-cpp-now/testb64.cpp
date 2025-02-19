#include<iostream>
#include"base64/base64.h"
int main(){
  std::cout<<b64encode("kill yourself")<<"\n";
  std::cout<<b64decode("a2lsbCB5b3Vyc2VsZg==");
}