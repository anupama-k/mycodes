#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include <fstream>
using namespace std;
#include <boost/algorithm/string.hpp>

class Packet{
public:
  std::ifstream in;
  std::string line;
  std::regex txt;
  std::string delimiters;
  std::vector<std::string> parts1;
};

class SdpInReq : public Packet{
public:

  bool isRegexMatch(){
    
    std::regex txt("sdp_in_req");
    return std::regex_search(line, txt);
  }
  
   void splitMatch(){
   std::regex txt("sdp_in_req");
   std::string delimiters(" ,:");
   if(std::regex_search(line, txt)){
       boost::split(parts1, line, boost::is_any_of(delimiters), boost::token_compress_on);
       std::copy(
       	 parts1.begin(),
       	 parts1.end(),
       	 std::ostream_iterator<std::string>(std::cout, "\n")
        );
     }
   }
 
};

//std::ifstream in;
int main(){

  //std::vector<Packet> parts1;
  ifstream in("E:/Learn/test.log");
  std::string line;
  while(in >> line){
     getline(in,line);
}

  Packet p1;
  p1.line;
  
  SdpInReq s1;
  s1.line;
  s1.splitMatch();
  s1.isRegexMatch();
  return 0;
}


 

