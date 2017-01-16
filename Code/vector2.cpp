#include <iostream>
#include <vector>
#include <string>
int main(){
std::vector<std::string> stringList;
stringList.push_back( "C99" );
stringList.push_back( "C++03" );
stringList.push_back( "C++11" );
for( auto str : stringList ) { 
std::cout << str << "\n";
}
return 0;
}
