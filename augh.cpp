#include <string>
#include <cstring>
#include "gass.h"

int augh(std::string& input_password) {
  int len = input_password.size();
  char final_password[len + 1]; // final password.
  final_password[len] = '\0';
  /*
    Note:
    the orignal code seems to use char* final_password = new char[len];
    and never appends a '\0' to the end of final_password, which I believe is the result of carelessness.
  */

  std::string whole_password; // whole password
  gass(whole_password, final_password, len); // calculate them

  int len1 = strlen(final_password);
  char with_null_chr[len1 + 1];
  strcpy(with_null_chr, final_password);

  if (len != len1) { // lengths not equal, meaning the password is too long
    return 0;
  }
  return (memcmp(with_null_chr, input_password.c_str(), len1) == 0);
}