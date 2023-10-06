#include <string>
#include <sstream>

std::string* undo(std::string& raw) {
  // raw: a b c d 
  std::stringstream ss(raw);
  std::string result;
  char c;
  while (ss >> c) {
    result += c;
  }
  return &result;
}