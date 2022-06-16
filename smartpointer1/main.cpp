//
//  main.cpp
//  smartpointer1
//
//  Created by moule on 2022/3/8.
//

#include <iostream>
#include <memory>
using namespace std;
unique_ptr<int> clone(int p);
unique_ptr<int> clone(int p) //不可以赋值，但是可以通过函数返回赋值
{
    unique_ptr<int> pInt(new int(p));
    return pInt;    // 返回unique_ptr
}
void unique_smart_point(){
    unique_ptr<int> p = make_unique<int>(3);
    unique_ptr<int> p1(new int(2));
    // unique_ptr没有copy构造函数，不支持普通的拷贝和赋值操作。
    // unique_ptr<int> pInt2(pInt);    // 报错
    // unique_ptr<int> pInt3 = p1;   // 报错
    //可以进行移动构造和移动赋值操作
   // unique_ptr虽然没有支持普通的拷贝和赋值操作，但却提供了一种移动机制来将指针的所有权从一个unique_ptr转移给另一个unique_ptr。如果需要转移所有权，可以使用std::move()函数。//
    unique_ptr<int> pInt(new int(5));
    unique_ptr<int> pInt2 = std::move(pInt);    // 转移所有权
    //cout << *pInt << endl; // 出错，pInt为空
    cout << *pInt2 << endl;
    unique_ptr<int> pInt3(std::move(pInt2)); // 2=>3
    int p2 = 5; //不能直接赋值，可以通过函数返回
    unique_ptr<int> ret = clone(p2);

    cout<< *p1 << endl;
    //release是指针为空，并返回指针指向的地址
    {
        //创建一个指向int的空指针
        std::unique_ptr<int> fPtr1;
        std::unique_ptr<int> fPtr2(new int(4));
        auto fPtr3 = std::make_unique<int>();
        
        //fPtr2释放指向对象的所有权，并且被置为nullptr
        std::cout << "fPtr2 release before:" << fPtr2.get() << std::endl;
        int *pF = fPtr2.release();
        std::cout << "fPtr2 release before:" << fPtr2.get() << " and pF value:" << *pF << std::endl;
        
        //所有权转移，转移后fPtr3变为空指针
        std::cout << "move before fPtr1 address:" << fPtr1.get() << " fPtr3 address:" << fPtr3.get() << std::endl;
        fPtr1 = std::move(fPtr3);
        std::cout << "move after  fPtr1 address:" << fPtr1.get() << " fPtr3 address:" << fPtr3.get() << std::endl;
        
        std::cout << "move before fPtr1 address:" << fPtr1.get() << std::endl;
        fPtr1.reset();
        std::cout << "move after  fPtr1 address:" << fPtr1.get() << std::endl;
    }

    
    
}
void shared_ptr_samrt_pointer(){
    // 共同维护内存地址和计数器，只有计数器为0了，才会释放资源
    
}
int main(int argc, const char * argv[]) {
    // insert code here...
  
    
   // cout<< *p1 << endl;
    std::cout << "Hello, World!\n";
    return 0;
}
