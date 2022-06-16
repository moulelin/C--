//
//  main.cpp
//  operator
//
//  Created by moule on 2022/3/10.
//

#include <iostream>
#include <istream>
using namespace std;

class Box
{
public:
    
    double getVolume(void)
    {
        return length * breadth * height;
    }
    void setLength( double len )
    {
        length = len;
    }
    
    void setBreadth( double bre )
    {
        breadth = bre;
    }
    
    void setHeight( double hei )
    {
        height = hei;
    }
    // 重载 + 运算符，用于把两个 Box 对象相加
    Box operator+(const Box& b)
    {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return box;
    }
private:
    double length;      // 长度
    double breadth;     // 宽度
    double height;      // 高度
};


struct complex{
    double m_real;
    double m_imag;
};;

//之所以返回 istream 类对象的引用，是为了能够连续读取复数，让代码书写更加漂亮，例如：
//complex c1, c2;
//cin>>c1>>c2;

istream & operator>>(istream &in, complex &A){
    in >> A.m_real >> A.m_imag;
    return in;
}
ostream & operator<<(ostream &out, complex &A){
    out << A.m_real <<"."<< A.m_imag<<endl;
    return out;
}
int main(int argc, const char * argv[]) {
    // insert code here...
    complex c1,c2;
    cin>>c1>>c2;
    cout<<c1<<c2;
    std::cout << "Hello, World!\n";
    return 0;
}
