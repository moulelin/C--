//
//  main.cpp
//  StackAndHeap
//
//  Created by moule on 2022/2/8.
//

#include <iostream>
int* GetArray(){ // 不对，不能这样写，因为int array[50];是真stack上，
    int array[50];
    int* arr = new int[50]; // correct or define array in main function 
    return array;// 是stack上的地址，函数结束这个stack就被回收了
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
