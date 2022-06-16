//
//  DefineNewException.cpp
//  UnexpectationError
//
//  Created by moule on 2022/2/16.
//

#include "DefineNewException.hpp"
#include <iostream>
struct MyExpection : public std::exception{
    const char* what() const throw(){ // 这里throw() 表示这个函数不抛出异常，因为这个就是处理异常的函数
        return "C++ Exception";
    }
};
int main(){
    std::cout<<111;
    try {
        MyExpection();
    } catch (MyExpection& e) {
        std::cout<<"MyException caught" <<std::endl;
        std::cout<<e.what()<<std::endl;
    }
    catch(std::exception& e){
        std::cout << "Nothing";
    }
    return 0;
}
