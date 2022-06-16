//
//  main.cpp
//  polymorphism
//
//  Created by moule on 2022/2/8.
//

#include <iostream>

class Shape{
   
protected:
    float width;
    float height;
public:
    Shape(float w, float h):width(w),height(h)
    {
        
    }
    virtual void area(){
        std::cout<< "this is base class"<< width*height<<std::endl;
        
    }
    
    
};
class Rectangle : public Shape{
protected:
    float w,h;
public:
    Rectangle(float x, float y):Shape(x,y),w(x),h(y){
        
    }
    void area(){
        std::cout<<"this is rectangle"<<w*h<<std::endl;
        
    }
};

class Triangle : public Shape{
protected:
    float w,h;
public:
    
    Triangle(float x, float y):Shape(x,y),w(x),h(y){
        
    }
    void area(){
        std::cout<<"this is triangle"<<w*h<<std::endl;
        
    }
};


int main(int argc, const char * argv[]) {
    // insert code here...
    
    Shape *triangle = new Triangle(10,2);
    triangle->area();
    
    //std::cout << "Hello, World!\n";
    return 0;
}

