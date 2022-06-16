//
//  main.cpp
//  UnexpectationError
//
//  Created by moule on 2022/2/16.
//
// try catch and throw
#include <iostream>
#include <fstream>
int main2(int argc, const char * argv[]) {
    // insert code here...
    std::ofstream out;
    try {
        out.open("a.txt", std::ios::app);
    } catch (...) {
        std::cout<<"No file exis"<<std::endl;
    }
    std::cout << "Hello, Worl\n";
    return 0;
}
