#include <iostream>
#include <cstring>
#include <cstdlib>
#include "base64/base64.h"

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(const int argc, const char **argv){
	std::string output = "";
	if (argc <= 2) {
		std::cout << ANSI_COLOR_RED << "no parameters found" << ANSI_COLOR_RESET;
		return 0;
	}
	if (strcmp(argv[1], "-d") == 0 || strcmp(argv[1], "--decode") == 0) {
		output = b64decode(argv[2]);
	} else if (strcmp(argv[1], "-e") == 0 || strcmp(argv[1], "--encode")) {
		output = b64encode(argv[2]);
	} else {
		std::cout << ANSI_COLOR_RED << "invalid option" << ANSI_COLOR_RESET;
		return 0;
	}
	if (output != "") {
		std::cout << output << "\n";
		std::system(("echo " + output + "|clip").c_str());
		std::cout << ANSI_COLOR_YELLOW << "[copied output to clipboard]" << ANSI_COLOR_RESET;
	}
}
