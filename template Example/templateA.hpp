//
//  person.c
//  分文件编写模版
//
//  Created by moule on 2022/3/13.
//
#pragma once
#include <iostream>
using namespace std;

template<class T>
class myArray{
public:
    myArray(int capacity):m_capacity(capacity){
        cout << "class init function" << endl;
        this->m_capacity = capacity;
        this->myAddress = new T[this->m_capacity];
        this->m_size = 0;
    }
    ~myArray(){
        cout << "class destory function" << endl;
        if (this->myAddress!=NULL){
            delete [] this->myAddress;
            this->myAddress = NULL;}
    }
    //拷贝构造
    void push_tail(const T& val){
        if (this->m_size == this->m_capacity){
            return;
        }
        this->myAddress[this->m_size] = val;
        this->m_size++;
    }
    void delete_tail(){
        //让用户访问不到最后的元素
        if (this->m_size ==0){
            return;
        }
        this->m_size--;
    }
    int capacity(){
        return this->m_capacity;
    }
    int get_size(){
        return this->m_size;
    }
    T& operator[] (int index){
        return this->myAddress[index];
    }
    myArray(const myArray& arr){
        
        cout << " copy class function" << endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->myAddress = new T[arr.m_capacity];// 获得新内存，不是指向原始内存的
        for(int i = 0; i<arr.m_size; i++){
            this->myAddress[i] = arr.myAddress[i];
            
        }
    
        
        
    }
    
    //operator=  也是为了防止浅拷贝问题
    myArray& operator=(const myArray& arr)
    {
        cout << " opeartor= function" << endl;
        //首先判断本类有没有数据，如果有就设置为空
        if(this->myAddress!=NULL){
            delete [] this->myAddress;
            this->myAddress = NULL;
            this->m_capacity = 0;
            this->m_size =0;
        }
        //拷贝
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->myAddress = new T[arr.m_capacity];
        for(int i = 0; i<arr.m_size; i++){
            this->myAddress[i] = arr.myAddress[i];
            
        }
        return *this; //返回自身
    }
private:
    T* myAddress;
    int m_capacity;
    int m_size;
};
