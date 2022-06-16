//
//  calculateSize.cpp
//  IO
//
//  Created by moule on 2022/2/9.
//

#include <fstream>
#include <iostream>
int main3(int argc, char* argv[]) {
    std::ifstream in;
    in.open("/Users/moule/Desktop/a.txt", std::ios::binary | std::ios::in);
    if (!in) {
        std::cout << "open file failed." << std::endl;
        return -1;
    }
    in.seekg(0, in.end);
    size_t fileSize = in.tellg();
    in.seekg(0, in.beg);
    fileSize += 1;
    char* buffer = new char[fileSize];
    in.read(buffer, fileSize);
   // int size = in.read(buffer, fileSize).gcount();
    std::cout << "size: " << buffer << std::endl;
    in.close();
    return 0;
}
