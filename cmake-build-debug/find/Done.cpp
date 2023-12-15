//
// Created by itpeng0077 on 2023/12/14.
//
#include <iostream>
#include <cstdlib>
int main() {
    int find[] = {9, 10, 6, 11, 15, 2, 7, 12};
    int rind = sizeof(find) / sizeof(find[0]);
    int left = 0;
//分界线
//大小排序代码块
    int ren = 0, ret;
    int ling = 0;
    for(ren = 0; ren < rind; ren++)
    {
        for(ret = ren + 1; ret < rind; ret++)
        {
            if(find[ren] > find[ret])
            {
                ling = find[ret];
                find[ret] = find[ren];
                find[ren] = ling;
            }
        }
    }
      for(int w  = 0; w < rind;w++){
        std::cout<<"find["<<w<<"] = "<<find[w]<<"\n";
    }
//
//查找下标代码块
    std::cout<<"Please a number:"<<"\n";
    std::cin>>left;
    int lin = 0;//起始位置
    int right = rind - 1;//最后元素的下标
    while (lin <= right) {
        int mid = (right - lin) / 2;//中间元素的下标
        int num = find[mid];
        if (num < left) {
            lin = mid + 1;
        } else if (left < num) {
            right = mid - 1;
        } else if (left == num) {
            std::cout << "left = "<< mid << "\n";
            break;
        }
    }



     system("pause");
        return 0;
}