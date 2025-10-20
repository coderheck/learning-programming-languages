#include <iostream>
#include <string>
#include <cstdlib>
int main() {
    std::string url = "https://bit.ly/hgjKaBaoq";
    std::string command;
    #ifdef _WIN32
        command = "start " + url;
    #else
        command = "open " + url;
    #endif
    int return_code = system(command.c_str());
    if (return_code != 0) {
        std::cerr << "Error opening URL: " << return_code << std::endl;
    }
    return 0;
}