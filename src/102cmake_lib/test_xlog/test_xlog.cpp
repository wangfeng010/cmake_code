#include<iostream>
#include"xlog.h" //预处理时找不到头文件
using namespace std;

int main()
{
    XLog log; //编译时找不到XLog的声明，链接错误找不到XLog定义
    cout << "test xlog" << endl;
}