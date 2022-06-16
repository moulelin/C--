//
//  main.cpp
//  templateInstance
//
//  Created by moule on 2022/3/11.
//

#include <iostream>
#include <string>
using namespace std;
class Person{
   
public:
    Person(string name, int age_in):m_Name(name), age(age_in){
        
    }
    string m_Name;
    int age;
};
template<typename T>
bool compareName(T &a, T &b){// 无法对比Person类
    if (a==b){
        return true;
    }
    else
        return false;
}
template<> bool compareName(Person &a, Person &b){ //可以对比
    cout << "call the template instance function" << endl;
    if (a.m_Name==b.m_Name){
        return true;
    }
    else
        return false;
   
}


int main(int argc, const char * argv[]) {
    // insert code here...
    Person p1("lin",12);
    Person p2("moule",12);
    bool flag = compareName(p1, p2);
    
    std::cout << "Hello, World!\n"<<flag<<endl;
    return 0;
}
