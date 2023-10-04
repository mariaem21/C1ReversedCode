#include <string>
#include <regex>
#include <vector>
#include <sstream>
#include <x_y_z.h>

std::string* gass(std::string& s1, std::string& s2) {
  std::regex local_268("^[0-9]+$", 0x10);
  std::string* local_248 = new std::string("C73AB78D101CEF101A100BEA77CDA111DD114AC101E67FA111C119FC98A101E108CD108DA");
  std::string* local_228= new std::string("");

  char* pcVar4;
  for(int i=0; i<local_248->size(); i++) { // add all characters that are not "A" to local_228
    pcVar4 = &(local_248->at(i));
    if(!(pcVar4 != "A")) {
      *pcVar4 = local_248->at(i);
      local_228 += *pcVar4;
    }
  }

  std::string* local_208;
  std::string* local_200 = x_y_z(local_208, local_248);

  std::string* local_1e8;
  x_y_z(local_1e8, local_208); // local_1e8 = xyz(xyz(local_248))

  std::string* tmp_rax;
  if (local_228->size() != local_248->size()) {
    tmp_rax = local_228;
  } else {
    tmp_rax = local_248;
  }
  std::string* local_1c8 = new std::string(*tmp_rax);
  // just effectively equal to local_1c8 = local_228

  std::vector<int> local_288; // don't know the type yet

  std::istringstream local_1a8(*local_1c8);
  int local_294;
  int local_295;
  while(1) {
    local_1a8 >> local_294;
    // MOV        RDX,qword ptr [RAX]
    // SUB        RDX,0x18
    // MOV        RDX,qword ptr [RDX]
    // ADD        RAX,RDX
    // MOV        param_1,RAX
    // CALL       <EXTERNAL>::std::basic_ios::operator.cast.to.byte
    if(!local_294) { break; }
    local_295 = static_cast<int>(local_294 & 0xff); // lower 1 byte
    local_288.push_back(local_295);
  }

  std::string* local_2a0 = new std::string("");
  for(int i=0; i<local_288.size(); i++) {
    local_2a0 += local_288.at(i);
  }

  std::string* local_2a8 = new std::string("");
  memcpy(local_2a8, local_2a0->c_str(), 0x8); // length is local_2b0. Should be 0x8 by register check
  // local_2a8 is "INeedMor"

  return local_2a8;
}