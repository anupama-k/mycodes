#include <iostream>
#include <string>
#include <vector>
#include <boost/algorithm/string.hpp>
using namespace std;
int main(){
std::string inputString("One!Two,Three:Four");
std::string delimiters("|,:");
std::vector<std::string> parts;
boost::split(parts, inputString, boost::is_any_of(delimiters));
 return 0;
}
