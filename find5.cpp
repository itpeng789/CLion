//
// Created by fackname on 2024/4/28.
//
#include <iostream>
#include <cstdlib>
#include <string>
class Num{
   public :
      void fact(std::string num,std::string lind);
};
void Num::fact(std::string num,std::string lind){
    std::cout<<"This is name :"<<num<<"\n"
    <<"This is name :"<<lind<<"\n";
}
int main(){
   Num M;
   std::string str1;
   std::string str2;
   std::cout<<"Please a name :"<<"\n";
   std::cin >> str1;
   std::cout<<"Please a name :"<<"\n";
   std::cin>>str2;
   M.fact(str1,str2);

    system("pause");
    return 0;
}