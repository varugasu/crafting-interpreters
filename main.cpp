#include <iostream>

void runFile() { std::cout << "Running file..." << std::endl; }

void runPrompt() { std::cout << "Running prompt..." << std::endl; }

void cli(int argc, char* argv[]) {
  if (argc > 2) {
    std::cout << "Usage: jlox [script]" << std::endl;
    std::exit(64);
  } else if (argc == 2) {
    runFile();
  } else {
    runPrompt();
  }
}

int main(int argc, char* argv[]) {
  cli(argc, argv);
  return 0;
}
