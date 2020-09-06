#include <iostream>
#include <map>
#include <string>


int main(int argc, char *argv[]){
  std::map<std::string,std::string> myMap;
  short int n, m;
  std::string strA,strB,strFin;
  std::cin>>n>>m;
  for(int i=0;i<m;i++){
    std::cin>>strA>>strB;
    if(strA.size()<=strB.size()){
      myMap.insert(std::pair<std::string,std::string>(strA,strA));
    }
    else{
      myMap.insert(std::pair<std::string,std::string>(strA,strB));
    }
  }
  for(int i=0;i<n;i++){
    std::cin>>strFin;
    std::cout<<myMap[strFin]<<" ";
  }
  return 0;
}