//
//  main.cpp
//  IO
//
//  Created by moule on 2022/2/9.
//

#include <iostream>
#include <fstream>

int main1(int argc, const char * argv[]) {
    // insert code here...
    char data[100];
    std::ofstream outfile;
    outfile.open("/Users/moule/Desktop/a.txt", std::ios::app|std::ios::trunc); // open file
    
    std::cout<<"enter something"<<std::endl;
    
    std::cin.getline(data, 100); // cin something
//    std::cin>>data;
    outfile << data << std::endl;// out into file
    
    std::cout<<data<<std::endl;
    outfile.close();
    
    std::ifstream infile;
    infile.open("/Users/moule/Desktop/a.txt");
    
    infile>>data; //read only one line once
    std::cout<<data<<std::endl;
    
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}
