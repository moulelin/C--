//
//  readSpecificLine.cpp
//  IO
//
//  Created by moule on 2022/2/9.
//
#include <string>
#include <fstream>
#include <iostream>

using namespace std;

char* readlinea(int idx);
int main()
{
    
    
    int i = 5;
    char* str = readlinea(i);
    return 0;
}


char* readlinea(int idx)
{
    ifstream in("/Users/moule/Desktop/a.txt");
    char* str = new char[60];
    
    int icount = 0;
    while(in.getline(str,60))
    {
        icount++;
        if(icount == idx)
        {
            cout << str << endl;
            return str;
            break;
        }
        
        
    }
    return str;
}
