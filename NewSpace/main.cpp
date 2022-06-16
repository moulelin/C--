//
//  main.cpp
//  NewSpace
//
//  Created by moule on 2022/2/17.
//

#include <iostream>
// define muti-array
int main(int argc, const char * argv[]) {
    // insert code here...
    int ROW = 2; //二维数组
    int COL = 3;
    double **pvalue  = new double* [ROW]; // 为行分配内存
    
    // 为列分配内存
    for(int i = 0; i < COL; i++) {
        pvalue[i] = new double[COL];
    }
    for(int i = 0; i < COL; i++) {
        delete[] pvalue[i];
    }
    delete [] pvalue;
    std::cout << "Hello, World!\n";
    return 0;
}
