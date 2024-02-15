//
// Created by itpeng007 on 2024/2/14.
//
#include <iostream>
#include <cstring>
#include <cstdlib>
const int lind = 5;
class find{
public://公开数组
    int fin[lind] = {};
};
int main(){
    find M;
    int i = 0;
    for(i; i < lind;i++){
        std::cout<<"please enter a number"<<"\n";
        std::cin >>M.fin[i];
    }//循环输入数组元素

    int right = 0,set = 0;
    int fact = 0;
    int run = 0;
    for(right = 0; right < i; right++)
    {
        for(set = right + 1; set < i; set++)
        {
            if(M.fin[right] > M.fin[set])
            {
                fact = M.fin[set];
                M.fin[set] = M.fin[right];
             M.fin[right] = fact;
            }
        }
    }//函数排序

    for(int w = 0; w < lind;w++){
        printf("M.fin[%d] = %d\n",w,M.fin[w]);
    }//打印函数

    system("pause");
    return 0;
}