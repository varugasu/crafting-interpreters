#ifndef SCANNER_H
#define SCANNER_H

#include <string>
#include <vector>
#include <sstream>

class Scanner {
 public:
  Scanner(const std::string source) : source(source) {}

  std::vector<std::string> scanTokens() {
    std::vector<std::string> tokens;
    std::istringstream stream(source);
    std::string token;

    while (stream >> token) {
      tokens.push_back(token);
    }

    return tokens;
  }

 private:
  std::string source;
};

#endif
