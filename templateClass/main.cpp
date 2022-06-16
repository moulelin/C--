//
//  main.cpp
//  templateClass
//
//  Created by moule on 2022/3/11.
//

#include <iostream>
#include <string>
using namespace std;
// 类模版没有自动类型推导
template<class NameType, class AgeType>
class Person{
public:
    NameType name;
    AgeType age;
    Person(NameType name_in, AgeType age_in):name(name_in),age(age_in){
        
    }
    void showData(){
        cout << this->name << " " << this->age<<endl;
    }
};
class Declare{ //这个只是为了证明在类内声明类外定义的也能访问私有变量
public:
    void print();
private:
    int a = 10;
};
void Declare::print(){
    a = 20;
    cout<< a << " access the private variable"<<endl;
}
// 参数模版化
template<class T1, class T2>
void printTest01(Person<T1,T2>&p){
    p.showData();
    cout << " The type of T1 is : "<<typeid(T1).name()<<endl;
    cout << " The type of T2 is : "<<typeid(T2).name()<<endl;
}


void test01(){
    Person<string, int>p("lin",12);
    printTest01(p);
}
//类模版化
template<class T>
void printTest02(T &p){
    cout<<"test02"<<endl;
    p.showData();
}
void test02(){
    Person<string, int> p2("mou",1);
    printTest02(p2);
}



int main(int argc, const char * argv[]) {
    // insert code here...
    Person<string, int> p1("lin", 24);
    p1.showData();
    
    Declare d1;
    d1.print();
    cout << "-----------" <<endl;
    test01();
    std::cout << "Hello, World!\n";
    
    test02();
    return 0;
}
