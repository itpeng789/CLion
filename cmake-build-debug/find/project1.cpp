//
// Created by itpeng0077 on 2023/12/12.
//
#include <iostream>
#include <cstdlib>
namespace A{//关键字 namespace 来定义一块命名空间

    struct book{
        char name[40];
        float number;
    }fin;
}
int main(){
    std::cout<<"Please enter the book name :"<<"\n";
    std::cin >> A::fin.name;//::左边是空白，代表去全局域访问
    std::cout<<"Please enter the amount :"<<"\n";
    std::cin >> A::fin.number;//::左边的域是A，代表去A这个命名空间域访问
    std::cout<<"The name of the book is :"<<A::fin.name<<"\n";
    std::cout<<"The amount of this book is "<<A::fin.number<<"\n";


    system("pause");
     return 0;
}