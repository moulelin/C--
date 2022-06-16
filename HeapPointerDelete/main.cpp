//
//  main.cpp
//  HeapPointerDelete
//
//  Created by moule on 2022/2/8.
//

#include <iostream>

class A{
private:
    int a,b;
public:
    void outA(){
        std::cout<<"A class"<<std::endl;
    }
};
class B{
private:
    A* a;
public:
    B(A* froma):a(froma)
    {

    }
    void out(){
        std::cout<<"B class" << std::endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    {
    B bFromA = new A();
        bFromA.out();
    }
    std::cout << "Hello, World!\n";
    return 0;
}
