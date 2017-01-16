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
  std::vector<std::string> parts1,parts2,parts3;
};

class SdpInReq : public Packet{
public:
 void split_match(){
std::regex txt("sdp_in_req");
std::string delimiters(" ,:");
ifstream in("c:/cygwin64/home/kanupa/Learn/test.log");
while(in >> line){
getline(in,line);
if(std::regex_search(line, txt)){
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

class WriteRetagXp : public Packet{
public:
  void split_match(){
std::regex txt("sdp_in_req");
std::string delimiters(" ,:");
    ifstream in("c:/cygwin64/home/kanupa/Learn/test.log");
    while(in >> line){
      getline(in,line);
    
    if(std::regex_search(line, txt)){
    boost::split(parts2, line, boost::is_any_of(delimiters), boost::token_compress_on);
std::copy(
        parts2.begin(),
        parts2.end(),
        std::ostream_iterator<std::string>(std::cout, "\n")
    );
  }
  }
  }
  
};

class FtiOutReq : public Packet{
public:
  void split_match(){
std::regex txt("sdp_in_req");
std::string delimiters(" ,:");
    ifstream in("c:/cygwin64/home/kanupa/Learn/test.log");
    while(in >> line){
      getline(in,line);
    
  if(std::regex_search(line, txt)){
    boost::split(parts3, line, boost::is_any_of(delimiters), boost::token_compress_on);
std::copy(
        parts3.begin(),
        parts3.end(),
        std::ostream_iterator<std::string>(std::cout, "\n")
    );
  }
  }
  }
 
};
	
int main(){
Packet p1;
SdpInReq s1;
WriteRetagXp w1;
FtiOutReq f1;
s1.split_match();
w1.split_match();
f1.split_match();
return 0;
}
