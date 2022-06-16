//
//  main.cpp
//  分文件编写模版
//
//  Created by moule on 2022/3/13.
//

#include <iostream>
#include <string>
#include "person.hpp"
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    Person<string, int>p("lin", 24);
    p.print();
    std::cout << "Hello, World!\n";
    return 0;
}
