//
// Created by fackbook on 2024/9/1.
//
#include <iostream>
#include <string>
int main(){
    const int pad = 1;
    const int rows = pad * 2 + 3;
    std::cout<< std::endl;
    int y = 0;
    while(y != rows){
        std::cout<<'-';
        y++;
    }


    return 0;
}