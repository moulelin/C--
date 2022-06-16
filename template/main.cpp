//
//  main.cpp
//  template
//
//  Created by moule on 2022/3/11.
//

#include <iostream>
using namespace std;
void Myswap(int &a, int &b){ // 可以与模版重载，优先调用普通函数
    int temp = a;              // 如果call的时候带<>，就调用模版。
                                
    a = b;
    b = temp;
    cout << "normal function" <<endl;
}
template<typename T>
void Myswap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
    cout << "template function" << endl;
};
template<typename T> //必须使用T，因为要明确T的类型，不然编译器不通过
void swap2(T a){
    
    cout << "No call T" << "\n" << a << endl;
};
int main(int argc, const char * argv[]) {
    // insert code here...
    int a = 10;
    int b = 20;
    Myswap(a, b); //自动类型推导，所有推导必须类型相同
    Myswap<int>(a, b);//显示声明
    std::cout << a << b <<endl;
    swap2<float>(2.2);
    
    char c = 'a';
    char d = 'b';
    Myswap(c, d); // 这个会调用模版，虽然这里没有使用<>,但是如果调用普通函数，这里需要进行一次隐式转换，比直接转换到模版多一步，因此编译器会自动匹配优先级高的
    return 0;
}
