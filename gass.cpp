#include <string>
#include <regex>
#include <vector>
#include <sstream>
#include "x_y_z.h"

void gass(std::string& where_to_store_whole_password, char* where_to_store_final_password, int length) {
  std::regex unused_regex("^[0-9]+$", 0x10);

  std::string secret("C73AB78D101CEF101A100BEA77CDA111DD114AC101E67FA111C119FC98A101E108CD108DA");
  std::string without_a; // just for misleading
  
  for (char c : secret) {
    if (c != 'A') {
      without_a += c;
    }
  }

  std::string asciis = x_y_z(secret);
  std::string unused_asciis = x_y_z(without_a);
  // the original x_y_z has takes two params, but here we only need one param in fact

  std::vector<char> v; // store the characters

  std::istringstream iss(asciis);
  int ascii;
  while(iss >> ascii) {
    v.push_back(static_cast<char>(ascii));
  }

  for(char& c : v) {
    where_to_store_whole_password.push_back(c);
  }
  // whole password is 'INeedMoreCowbell'
  memcpy(where_to_store_final_password, where_to_store_whole_password.c_str(), length);
  // final password is part of the whole password, length is equal to user input
}