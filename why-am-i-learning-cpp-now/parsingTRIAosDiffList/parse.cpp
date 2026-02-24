#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

const std::vector<std::string> basicInfoTitle = {"rating: ", "map name: ", "creators: ", "id: ", "yt link: "};
const std::vector<std::string> otherInfoTitle = {"skills: ", "awards: ", "medal: ", "map length: ", "inst count: ", "btn count: ", "music: ", "date published: "};
const std::vector<std::string> skills = {"walljumps", "wallruns", "airdiving", "linear sliding", "momentum sliding", "orbs"};

std::vector<std::string> separateTokens (std::string &s, const std::string &delim) {
    std::vector<std::string> tokens; size_t pos = 0; std::string token;
    while ((pos = s.find(delim)) != std::string::npos) {
        token = s.substr(0, pos);
        tokens.push_back(token);
        s.erase(0, pos + delim.size());
    }
    tokens.push_back(s);
    return tokens;
}

int main(){
    freopen("migrated.md","r",stdin);
    std::cin.tie(nullptr)->sync_with_stdio(false);
    std::string line, token;
    while (std::getline(std::cin,line)) {
        if (line[0] == '/') {
            // quick and dirty way to identify start of metadata,
            // will die if theres any change to the structure
            line.erase(0, 2); // erasing the leading "//"

            /* BASIC INFO */
            std::cout << ANSI_COLOR_BLUE << "*) BASIC MAP INFOS:\n" << ANSI_COLOR_RESET;
            std::vector<std::string> tokens = separateTokens(line, " | ");

            for (size_t i = 0; i < tokens.size(); i++) {
                std::cout << basicInfoTitle[i] << tokens[i] << "\n";
            }
            std::cout << "\n";

            /* OTHER INFO */
            std::getline(std::cin, line); // theres a blank line separating every metadata line
            std::getline(std::cin, line); // other info line
            std::cout << ANSI_COLOR_GREEN << "*) OTHER MAP INFOS:\n" << ANSI_COLOR_RESET;
            tokens = separateTokens(line, " | ");
            for (size_t i = 0; i < tokens.size(); i++) {
                std::cout << otherInfoTitle[i];
                if (i == 0) {
                    // skills parsing
                    for (size_t j = 0; j < tokens[i].size(); j++) {
                        std::cout << skills[tokens[i][j] - '0'] << (j + 1 < tokens[i].size() ? ", " : "\n");
                    }
                } else if (i == 1) {
                    // awards parsing
                    if (tokens[i] == "0") {
                        std::cout << "None\n";
                    } else if (tokens[i] == "1") {
                        std::cout << "Featured\n";
                    } else if (tokens[i] == "2") {
                        std::cout << "Revolutionary\n";
                    } else {
                        std::cout << "Invalid Award ID\n";
                    }
                } else {
                    std::cout << tokens[i] << "\n";
                }
            }
            std::cout << "\n";

            // std::getline(std::cin, line); // theres a blank line separating every metadata line
            // std::getline(std::cin, line); // map desc line
            //
            // std::cout << "\n";

            std::getline(std::cin, line); // theres a blank line separating every metadata line
            std::getline(std::cin, line); // victors line (their ass FORGOT the map desc line)
            std::cout << ANSI_COLOR_YELLOW << "*) TOP 3 VICTORS:\n" << ANSI_COLOR_RESET;
            tokens = separateTokens(line, ", ");
            for (size_t i = 1; i - 1 < tokens.size(); i++) {
                std::cout << "#" << i << " victor: " << tokens[i - 1] << "\n";
            }

            std::cout << "\n\n";
        }
    }
}
