//
//  main.cpp
//  permation
//
//  Created by moule on 2022/4/21.
//

#include <iostream>
#include <string>
using namespace std;

void permute(string str, int k) {
    if (k == str.size() - 1) {
        cout << str << endl;
        return;
    }
//    else if (k >= str.size()) return;
    for (int i = k; i < str.size(); i++) {
        cout << i <<" "<< k <<endl;
        swap(str[i], str[k]);
        permute(str, k + 1);
        cout << i <<" "<< k <<"track"<<endl;
        swap(str[i], str[k]);
    }
}

void permute(string str) {
    if (str.empty()) return;
    permute(str, 0);
}

int main()
{
    string str = "abc";
    permute(str);
    system("pause");
    return 0;
}
