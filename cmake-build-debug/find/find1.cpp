//
// Created by itpeng0077 on 2023/11/30.
//
#include <iostream>
#include <cstring>
#include <cstdlib>
int main(){
   std::string s1;
   std::string s2;
   std::string s3 = "hello";
   std::string s4 = "world";
   std::cout<<"Please enter s1 :"<<"\n";
   std::getline(std::cin,s1);//整行读取
   std::cout<<"Please enter s2 :"<<"\n";
   std::cin>>s2;//输入hello world 只读取hello
   std::cout << "string s1 = " <<s1<<"\n";
   std::cout<<"s2 = "<<s2<<"\n";
   std::string str = s3 + s4;//两个string对象相加
   //=s3+=s4
   s3+=s4;//相当于 s3 + s4
   std::cout<<"str = "<<str<<"\n";
   std::cout<<"s3 += s4 = "<<s3<<"\n";


    system("pause");
    return 0;
}