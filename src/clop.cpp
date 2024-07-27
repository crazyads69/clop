/*
    IMPORT BUILT-IN LIBRARY
*/
#include <iostream>
#include <string>
#include <vector>

/*
    IMPORT CUSTOM LIBRARY
*/
#include "help.hpp"
#include "intro.hpp"
#include "print.hpp"

/*
    SOME DEFAULT/CONST VALUE
*/
#define version "0.0.1" // Version of CLOP using semantic versioning (x.y.z)

/*
    START POINT
*/
using namespace std;
int main(int argc, char *argv[]) {
  // Convert argv to string for query command line
  // after convert you can check argv with key_args[int] - begin with 0
  std::string current_exec_name = argv[0];
  std::vector<std::string> key_args;
  if (argc > 1) {
    key_args.assign(argv + 1, argv + argc);
  }

  // Return logo CLOP and exit if system can't find params.
  if (argc == 1) {
    intro::printIntroFull();
    return 0;
  }

  // START BODY PROGRAM
  // where system switch to sub lib
  if (key_args[0] == "intro") {
    intro::printIntroFull();
  } else if (key_args[0] == "help") {
    printHelp();
  } else if (key_args[0] == "version") {
    cout << "CLOP version: " << version << endl;
  } else if (key_args[0] == "test") {
    print::error("message text here");
    print::done("message");
    print::qa("text");
    print::info("text info");
    print::loading("load");
    print::custom("cc", "Hello test", "33");
  } else {
    cout << "Unknow command. Use 'clop help' for more information." << endl;
  }

  return 0;
}