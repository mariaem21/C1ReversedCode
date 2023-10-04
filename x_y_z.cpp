#include <string>

std::string* x_y_z(std::string* s1, std::string* s2) {
  s1 = new std::string(*s2);
  std::string* local_80 = s1;
  char* local_70;
  for(std::string::iterator it = local_80->begin(); it != local_80->end(); ++it) {
    local_70 = &(*it);
    if(((*local_70 < '0') || ('9' < *local_70)) && (*local_70 != ' ')) { // turn everything that is not number to space
      *local_70 = ' ';
    }
  }
  while(s1->find("  ") != std::string::npos) { // turn double space to single space
    s1->replace(s1->find("  "), 2, (char*)(" "));
  }

  *s1 = s1->substr(s1->find_first_not_of(0x20, 0x0), std::string::npos); // get substring from first non-space character to end;
  *s1 = s1->substr(0x0, s1->find_last_not_of(0x20, std::string::npos) + 1); // get substring from beginning to last non-space character
}
