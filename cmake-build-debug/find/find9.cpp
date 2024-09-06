//
// Created by fackbook on 2024/9/6.
//
#include <iostream>
#include <ctime>
int main(){
   time_t timer;
   timer = time(NULL);
   struct tm * look;
   look = localtime(&timer);
  std::cout<<"Local time is :"<<asctime(look)<<std::endl;

 return 0;
}
