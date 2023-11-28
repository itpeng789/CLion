//
// Created by itpeng0077 on 2023/11/26.
//
#include <iostream>
#include <cstdlib>
class find{
  public:
    int fact(int i,int w);
};
int find::fact(int i, int w) {
   int ret;
    ret = i+w;
  std::cout<<" ret = "<<ret<<"\n";
    return ret;
}

int main(){
    find M;
    int sun,ret;
    std::cout<<"Please two number:"<<"\n";
    std::cin>>sun>>ret;
    M.fact(sun,ret);



    system("pause");
    return 0;
}