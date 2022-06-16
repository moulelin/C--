//
//  main.cpp
//  template Example
//
//  Created by moule on 2022/3/13.
//

#include <iostream>
#include "templateA.hpp"
#include <string>
using namespace std;

class Person{
public:
    Person (){}
    Person(string name, int age):m_name(name),m_age(age){
        
    }
    string m_name;
    int m_age;
    
};

void print_array(myArray<int>&arr){
    for (int i=0;i<arr.get_size();i++){
        cout<< arr[i] <<endl;
    }
}

void print_person(myArray<Person>&arr){
    for (int i=0;i<arr.get_size();i++){
        cout << arr[i].m_name<<arr[i].m_age<<endl;
    }
}
void test02(){
    myArray<Person>arrClass(6);
    Person p1("lin",12);
    Person p2("mou",12);
    
    arrClass.push_tail(p1);
    arrClass.push_tail(p2);
    print_person(arrClass);
}
void test01(){
    myArray<int>arr1(5);
    for(int i=0; i<5;i++) {
        arr1.push_tail(i);
    }
    print_array(arr1);
    myArray<int> arr2(arr1);
    print_array(arr2);
    

//
//    myArray<int> arr3(100);
}
int main(int argc, const char * argv[]) {
    // insert code here...
    test02();
    std::cout << "Hello, World! class";
    return 0;
}
