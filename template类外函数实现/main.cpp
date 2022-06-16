//
//  main.cpp
//  template类外函数实现
//
//  Created by moule on 2022/3/12.
//

#include <iostream>
using namespace std;

template<class NameType, class AgeType>
class Person{
public:
    NameType name;
    AgeType age;
    Person(NameType name_in, AgeType age_in);//只声明不实现
    void showData();
};
template<class T1, class T2>//类外实现构造函数
Person<T1, T2>::Person(T1 name, T2 age){
    this->name = name;
    this->age = age;
}
template<class T1, class T2>//类外实现函数
void Person<T1, T2>::showData(){
    cout << name << age <<endl;
}
void test(){
    Person<string, int>p1("lin",23);
    p1.showData();
}



int main(int argc, const char * argv[]) {
    // insert code here...
    test();
    std::cout << "Hello, World!\n";
    return 0;
}
