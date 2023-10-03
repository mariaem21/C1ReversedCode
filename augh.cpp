#include <string>
#include <gass.h>
#include <cstring>

int augh(std::string& s) {
  int length = s.size();
  std::string local_string(40, ' ');
  char* __s = new char[length];
  gass(local_string, __s); // ? performs some modification on __s?
  // destroy local_string
  int __n = std::strlen(__s);
  char* __dest = new char[__n + 1];
  std::strcpy(__dest, __s);

  int sVar3 = s.size();
  if (sVar3 == __n) {
    int iVar1 = memcmp(__dest, s.c_str(), __n);
    if (iVar1 == 0) {
      if (__dest != (char *)0x0 ) {
        delete __dest;
        return 1;
      }
    }
  }
  if (__dest != (char*)0x0) {
    delete __dest;
  }
  return 0;

}