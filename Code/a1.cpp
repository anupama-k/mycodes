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
  // std::vector<std::string> lines;
  std::string line;
  std::regex txt;
  std::string delimiters;
  std::vector<std::string> parts1,parts2,parts3;
};
class SdpInReq : public Packet{
public:
  //std::string line;
 
  void split_match(){
     std::regex txt("sdp_in_req");
    std::string delimiters(" ,:");
  ifstream in("E:/Learn/test.log");
    while(in>>line){
      getline(in,line);
      //cout<<line<<endl;
    
    if(std::regex_search(line,txt)){
      //cout<<"xyz"<<endl;
       boost::split(parts1, line, boost::is_any_of(delimiters), boost::token_compress_on);
std::copy(
        parts1.begin(),
        parts1.end(),
        std::ostream_iterator<std::string>(std::cout, "\n")
    );
     }
    
     }
  }
};
int main(){
  //std::ifstream in;
  //std::regex txt("id");
  //std::string delimiters(" ,:");
  Packet p1;
  SdpInReq s1;
  s1.split_match();
  
  return 0;
}
