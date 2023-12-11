//
// Created by itpeng0077 on 2023/12/10.
//
#include <iostream>
#include <cstdlib>
#include <iomanip>
int main(){
   int sun = 071;//八进制
   int ret = 0x15;//十六进制
   unsigned int arr = 100;//无符号整形
   int lin = -127;//有符号整数
   char find = 'a';//字符变量
   long int fack = 30l;//长整型
   long long int name = 100000;//长长整形
   std::cout<<" sun "<<std::setbase(8)<<sun <<"\n";
   std::cout<<" ret "<<std::setbase(16)<<ret <<"\n";
   std::cout<<" arr "<<arr<<"\n";
   std::cout<<" lin "<<std::setbase(10)<<lin<<"\n";
   std::cout<<" find "<< find<<"\n";
   std::cout<<" fack "<<std::setbase(10)<<fack <<"\n";
   std::cout<<" name "<<name <<"\n";




    system("pause");
    return 0;
}