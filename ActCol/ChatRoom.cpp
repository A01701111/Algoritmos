#include <iostream>
#include <string>

int main() {
  std::string str,c;
  std::string str2=""; 
  int flags[4]={0,0,0,0};
  
  std::cin>>str;
 
 for(auto i:str){
   c=i;
   if(i == 'h'&&flags[0]<1){
     flags[0] = 1;
     str2.append(c);
   }
   else if(i=='e'&&flags[1]<1&&flags[0]>0){
     flags[1] = 1;
     str2.append(c);
   }
   else if(i=='l'&&flags[2]<2&&flags[1]>0){
     int x = flags[2];
     x++;
     flags[2]=x;
     str2.append(c);
   }
   else if(i=='o'&&flags[3]<1&&flags[2]>=2){
     flags[3] = 1;
     str2.append(c);
   }
 }
 
 if(str2=="hello"){
   std::cout<<"YES";
 }
 else{
   std::cout<<"NO";
 }

  return 0;
}