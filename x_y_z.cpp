#include <string>

std::string x_y_z(const std::string& s) {
  std::string result = s;

  for (char& c : result) {
    if ((c < '0' || '9' < c) && c != ' ') {
      c = ' ';
    }
  }

  while (result.find("  ") != std::string::npos) {
    result.replace(result.find("  "), 2, " ");
  }

  result = result.substr(result.find_first_not_of(0x20, 0x0), std::string::npos);
  result = result.substr(0x0, result.find_last_not_of(0x20, std::string::npos) + 1);

  return result;
}