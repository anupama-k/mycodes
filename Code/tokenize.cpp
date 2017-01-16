// #include <string> 
// #include <iostream>
// #include <fstream> 
// #include <vector> 
// using namespace std;  
// int main()
//  {   
// vector<string> words;   
// ifstream in("E:/Learn/sdpr1.log");   
// string word;  
// while(in >> word)     
// words.push_back(word);    
// for(int i = 0; i < words.size(); i++)     
// cout << words[i] << endl; 
//  }


#include <string> 
#include <iostream>
#include <fstream> 
#include <vector>
#include <regex>
using namespace std;
int main(){
  vector<string> words;
  ifstream in("E:/Learn/sdrp1.log");
  std::string s;
  std::regex e ("(_CCM_LOGGER\/sdp_in_req)(.*)");

  if (std::regex_match (s,e)){
    std::cout << "string object matched\n";
  }
  return 0;
}
