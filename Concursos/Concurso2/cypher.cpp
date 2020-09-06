#include <iostream>
#include <cmath>
#include <string>

unsigned GetNumberOfDigits (unsigned i)
{
    return i > 0 ? (int) log10 ((double) i) + 1 : 1;
}
int main() {
  int key,keyA,keyB;
  int valA,valB,dig;
  std::cin>>key;
  std::cin>>valA>>valB;
  std::string str ="NO";
  dig = GetNumberOfDigits(valB);
  do{
    int div=pow(10,dig);
    keyA=key/div;
    keyB=key%div;
    if(keyA%valA==0&&keyB%valB==0){
      str="YES";
    }
    dig++;
  }
  while(str!="YES"|| keyA==0);
  if(str=="YES"){
    std::cout<<str<<std::endl<<keyA<<" "<<keyB;
  }
  else{
    std::cout<<str;
  }

  return 0;
}