#include <iostream>
#include <string>

int main() {
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);
    std::string name;
    std::cout << "What's your name:";
    std::cin >> name;
    std::cout << "Your name is " << name << std::endl;
    return 0;
}