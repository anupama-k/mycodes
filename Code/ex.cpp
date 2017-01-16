/*int main(){
  ifstream fin;
  fin.open("E:/Learn/sir.log");
 char buf[512];
    
 cout<<fin.getline(buf, 512)<<endl;
    
}
http://stackoverflow.com/questions/236129/split-a-string-in-c/236803#236803
*/
#include<iostream>
using std::cout;
using std::endl;
#include <fstream>
#include <cstring>
using std::strtok;

class SdpPacket{
public:
  char sdp_id, ccm_id, addr, len, qos_fwd, qos_pri, chain, pass_pw, blk_lvl, strm_id;
  int arr[];
  
};
int main() 
{ 
  SdpPacket p1;
    std::ifstream file("E:/Learn/sir.log");
    std::string str; 
    std::getline(file, str);
    cout<<getline<<str<<endl;

    /*cout<<strtok<<getline<<endl;
    p1.sdp_id=;
    p1.ccm_id=;
    p1.addr=;
    p1.len=;
    p1.vc=;
    p1.qos_fwd=;
    p1.chain=;
    p1.pass_pw=;
    p1.blk_lvl=;
    p1.strm_id=;*/
    return 0;
}



