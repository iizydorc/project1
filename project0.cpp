#include <iostream>
std::string code[] = {
",","#include <iostream>","std::string code[] = {","int main(){","   for (int i = 1; i < 3; i++){","      std::cout << code[i]<< std::endl;","   }","   for (int i = 0; i < 17; i++){","       std::cout << char(34) << code[i] << char(34) << code[0];","   }","   std::cout << code[16] <<std::endl;","   for (int i = 3; i < 16; i++){","       std::cout << code[i]<< std::endl;","   }","   return 0;","}","};",
};
int main(){
   for (int i = 1; i < 3; i++){
      std::cout << code[i]<< std::endl;
   }
   for (int i = 0; i < 17; i++){
       std::cout << char(34) << code[i] << char(34) << code[0];
   }
   std::cout << code[16] <<std::endl;
   for (int i = 3; i < 16; i++){
       std::cout << code[i]<< std::endl;
   }
   return 0;
}
//here is a comment for my new branch!
//Omg here is another comment for the new branch!
// ...and this is for master only
