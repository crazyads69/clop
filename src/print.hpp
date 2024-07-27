/*
    PRINT LIBRARY
    Use for print log in terminal with formatted style
*/

#ifndef PRINT_HPP
#define PRINT_HPP

#include <algorithm>
#include <iostream>
#include <string>

namespace print {

inline void upcase(std::string &str) {
  std::transform(str.begin(), str.end(), str.begin(), ::toupper);
}

inline void error(const std::string &message) {
  std::cout << "\x1B[31m[ERROR]\033[0m - " << message << std::endl;
}

inline void info(const std::string &message) {
  std::cout << "\x1B[94m[INFO ]\033[0m - " << message << std::endl;
}

inline void done(const std::string &message) {
  std::cout << "\x1B[32m[DONE ]\033[0m - " << message << std::endl;
}

inline void qa(const std::string &message) {
  std::cout << "\x1B[33m[Q & A]\033[0m - " << message << std::endl;
}

inline void loading(const std::string &message) {
  std::cout << "\x1B[36m[LOAD ]\033[0m - " << message << std::endl;
}

inline void custom(const std::string &title, const std::string &message,
                   const std::string &color_code) {
  std::string temp_title = title;
  upcase(temp_title);
  temp_title.resize(5);
  std::string temp_str =
      "\x1B[" + color_code + "m[" + temp_title + "]\033[0m - ";
  std::cout << temp_str << message << std::endl;
}

inline void text(const std::string &message) {
  std::cout << message << std::endl;
}

} // namespace print

#endif // PRINT_HPP