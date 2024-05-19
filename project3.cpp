//
// Created by fackname on 2024/5/19.
//

#include <iostream>
#include <cstdlib>
int main(){
    std::string name;
    std::cout<<"Please enter your first name : ";
    std::cin>>name;

    const std::string greeting = "Hello " + name + " !";
    //1
    const std::string space(greeting.size(),' ');
    const std::string second = "* " + space + " *";
    //2-4
    const std::string first(second.size(),'*');


    std::cout<<first<<"\n";
    std::cout<<second <<"\n";
    std::cout<<"* "<<greeting <<" *"<<"\n";
    std::cout<<second<<"\n";
    std::cout<<first<<"\n";


    system("pause");
    return 0;
}
