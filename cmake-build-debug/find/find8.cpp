//
// Created by fackbook on 2024/8/25.
//
#include <iostream>
#include <string>
#include <cstdlib>
int main(){
    std::cout<<"Please a name: ";
    std::string name;
    std::cin >> name;
    const std::string fack = "Hello " + name + " ";
    std::cout<<"*"<< fack <<"*"<<"\n";
     int run =  fack.size();
    std::cout<<"run = "<<run<<"\n";

    std::cout<<"Done!"<<"\n";

    return 0;
}