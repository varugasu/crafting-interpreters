#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "scanner.h"

void run(const std::string& source) {
  Scanner scanner(source);
  std::vector<std::string> tokens = scanner.scanTokens();
  for (const auto& token : tokens) {
    std::cout << token << std::endl;
  }
}

void runFile(const char* path) {
  std::ifstream file(path);
  std::string content((std::istreambuf_iterator<char>(file)),
                      std::istreambuf_iterator<char>());
  run(content);
}

void runPrompt() {
  while (true) {
    std::cout << "> ";
    std::string line;
    std::getline(std::cin, line);
    if (line.empty()) break;
    run(line);
  }
}

void cli(int argc, char* argv[]) {
  if (argc > 2) {
    std::cout << "Usage: jlox [script]" << std::endl;
    std::exit(64);
  } else if (argc == 2) {
    runFile(argv[1]);
  } else {
    runPrompt();
  }
}

int main(int argc, char* argv[]) {
  cli(argc, argv);
  return 0;
}
