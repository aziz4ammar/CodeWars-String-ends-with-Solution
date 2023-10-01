#include <string>

bool solution(std::string const &str, std::string const &ending) {
    // Check if 'ending' is longer than 'str'
    if (ending.length() > str.length()) {
        return false;
    }

    // Use substr to compare the end of 'str' with 'ending'
    return str.substr(str.length() - ending.length()) == ending;
}