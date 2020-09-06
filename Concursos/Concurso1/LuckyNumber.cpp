#include <iostream>
#include <string>
int main() {
  short int n;
  std::string str ="";
  std::cin>>n;
  
  if(n%4==0 || n%7==0 || n%47==0 || n%74==0||n%444==0||n%447==0|| n%474==0|| n%477==0|| n%744==0|| n%747==0|| n%777==0){
   str="YES";
  }
  else{
    str="NO";
  }
  std::cout<<str;
  return 0;
}