#include <iostream>
#include <string>
#include <regex>

int main ()
{

  if (std::regex_match ("subject", std::regex("(sub)(.*)") ))
    std::cout << "string literal matched\n";

  
   return 0;
}
