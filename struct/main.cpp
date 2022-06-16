//
//  main.cpp
//  struct
//
//  Created by moule on 2022/4/24.
//

#include <iostream>
using namespace std;
struct Person{
    void print(int a){
        cout<<a<<endl;
    };
    
};
int main(int argc, const char * argv[]) {
    // insert code here...
    Person ().print(12);
    
    std::cout << "Hello, World!\n";
    return 0;
}
