#ifndef INTRO_HPP
#define INTRO_HPP

#include <iostream>
#include <string>

namespace intro {

static const std::string LOGO = " _______  ___      _______  _______\n"
                                "|       ||   |    |       ||       |\n"
                                "|       ||   |    |   _   ||    _  |\n"
                                "|       ||   |    |  | |  ||   |_| |\n"
                                "|      _||   |___ |  |_|  ||    ___|\n"
                                "|     |_ |       ||       ||   |    \n"
                                "|_______||_______||_______||___|    \n";

inline void printIntroLogo() { std::cout << LOGO << std::endl; }

inline void printIntroText() {
  std::cout << "Welcome to CLOP - new ultimate packages management."
            << std::endl;
  std::cout << "If you want to read more document, visit: " << std::endl;
}

inline void printIntroFull() {
  printIntroLogo();
  printIntroText();
}

} // namespace intro

#endif // INTRO_HPP