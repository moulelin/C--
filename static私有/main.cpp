#include <iostream>

using namespace std;

class test2
{
public:
    test2(int num) : y(num){}
    ~test2(){}
    
    static void testStaticFun()
    {
       // cout << "y = " << y << endl; //Error:静态成员函数不能访问非静态成员
    }
    
    void testFun()
    {
        cout << "x = " << x << endl;
    }
private:
    static int x;//静态成员变量的引用性说明
    int y;
};

int test2::x = 10;//静态成员变量的定义性说明

int main(void)
{
    test2 t(100);
    t.testFun();
    
    return 0;
}
/*
 c语言中：
 用于函数内部修饰变量，即函数内的静态变量。这种变量的生存期长于该函数，使得函数具有一定的“状态”。使用静态变量的函数一般是不可重入的，也不是线程安全的，比如strtok(3)。
 用在文件级别（函数体之外），修饰变量或函数，表示该变量或函数只在本文件可见，其他文件看不到也访问不到该变量或函数。专业的说法叫“具有internal linkage”（简言之：不暴露给别的translation unit）。
 c++语言中（由于C++引入了类，在保持与C语言兼容的同时，static关键字又有了两种新用法）：
 用于修饰类的数据成员，即所谓“静态成员”。这种数据成员的生存期大于class的对象（实例/instance）。静态数据成员是每个class有一份，普通数据成员是每个instance 有一份。
 用于修饰class的成员函数，即所谓“静态成员函数”。这种成员函数只能访问静态成员和其他静态程员函数，不能访问非静态成员和非静态成员函数。
 ————————————————
 版权声明：本文为CSDN博主「men_wen」的原创文章，遵循CC 4.0 BY-SA版权协议，转载请附上原文出处链接及本声明。

 */
