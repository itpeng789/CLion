//
// Created by itpeng0077 on 2023/12/13.
//
#include <iostream>
#include <cstdlib>
#include <string>
using std::cout;
using std::cin;
int main(){
   int fin[] = {9,8,7,6,5,4,3,2,1};
   int i = sizeof(fin)/sizeof(fin[0]);

    int ren = 0,ret;
    int lin;
    int lind;
    for(ren = 0; ren < i; ren++)
    {
        for(ret = ren + 1; ret < i; ret++)
        {
            if(fin[ren] > fin[ret])
            {
                lin = fin[ret];
                fin[ret] = fin[ren];
                fin[ren] = lin;
            }
        }
    }
/*
* 排序循环
*/
  for(int w  = 0; w < i;w++){
        cout<<"find["<<w<<"] = "<<fin[w]<<"\n";
    }

/*
*   查找下标函数
*/
     int left = 0;
     int right = i -1;
    cout<<"Please a number : "<<"\n";
    cin >> lind;
    for(int w = 0; w < i;w++){
        if(fin[w] == lind)
            cout <<"This is find = " <<lind<< "\n"<< "Location of index " << w << "\n";
    }



    system("pause");
    return 0;
}
