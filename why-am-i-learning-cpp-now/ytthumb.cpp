#include <iostream>
#include <string>
#include <cstdlib>
#include "windows.h"
int main(int argC,char *argVal[]){
  if(argC == 1){
    std::cout << "you didn't specify any valid videoId\nexiting after 5 seconds...";
    Sleep(5000);
    return 0;
  }
  std::string command, url = std::string("https://i.ytimg.com/vi/") +
                             std::string(argVal[1]) +
                             std::string("/maxresdefault.jpg");
  std::cout << "opening link: " << url << "\n";
  #ifdef _WIN32
    command = "start " + url;
  #else
    command = "open " + url;
  #endif // _WIN32
  int ret = system(command.c_str());
  if(ret != 0){
    std::cout << "error opening url, exit code " << ret << "\nexiting after 5 seconds...";
    Sleep(5000);
  }else{
    std::cout << "opened url successfully\nexiting after 5 seconds...";
    Sleep(5000);
  }
}
