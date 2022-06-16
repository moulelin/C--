//
//  person.c
//  分文件编写模版
//
//  Created by moule on 2022/3/13.
//

#include <iostream>
#include <string>
using namespace std;
template<class TypeName, class TypeAge>
class Person{
public:
    Person(TypeName name, TypeAge);
    void print();
private:
    TypeName name_class;
    TypeAge age_class;
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age){
    this->name_class = name;
    this->age_class = age;
}
template<class T1, class T2>
void Person<T1, T2>::print(){
    cout << name_class << age_class;
    
}
