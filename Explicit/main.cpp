//
//  main.cpp
//  Explicit
//
//  Created by moule on 2022/3/4.
//

#include <iostream>

class A{
private:
    std::string n_Name;
    int age;
public:
    A(const std::string& name):n_Name(name),age(20){
        
    }
     A(int age_s):n_Name("unknown"),age(age_s){
        
    }
    void output(){
        std::cout<<n_Name<<" "<<age<<std::endl;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    
    A a = 10; //10 调用了A的age_s的构造函数（隐式转换一次），加入explicit就不能这样隐式转换了
    A s("sdsd"); //把字符数组char* a[4](最后一个\n)，隐式转换为string了
    A c = std::string("lin");//不能用“lin”，因为只能隐式转换一次，这里用lin就需要转换两次
    c.output();
    a.output();
    std::cout << "Hello, World!\n";
    return 0;
}
