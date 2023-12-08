//
// Created by itpeng0077 on 2023/12/3.
//
#include <bits/stdc++.h>
#include <unistd.h>
#define NUM 100
int main(){
    char buffer[NUM +1] = {0};
    char arr[5] = {"-/|\\"};
    for(int i = 0;i < NUM ; i++){
        buffer[i] = '-';
        printf("[%-100s][%d%%][%c]\r",buffer,i+1,arr[i%4]);
        fflush(stdout);
        usleep(20000);}
    std::cout<<"\n";
    std::cout<<"Done!"<<"\n";
    system("pause");
    return 0;
}