//
//  main.cpp
//  interface
//
//  Created by moule on 2022/2/8.
//

#include <iostream>

class BaseInterface{
private:
    float height,width;
public:
    virtual void result() = 0;
    BaseInterface(float x, float y):height(x),width(y){
        
    }
    void GetResult(){
        std::cout<<height*width<<"\n"<<"this is interface"<<std::endl;
    }
};

class GetFromInterface:public BaseInterface{
public:
    
    GetFromInterface(float x, float y):BaseInterface(x, y){
        
    }
    void result() {
        GetResult();
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    BaseInterface *te = new GetFromInterface(1,2);
    te->result();
    std::cout << "Hello, World!\n";
    return 0;
}
