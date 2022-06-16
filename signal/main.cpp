//
//  main.cpp
//  signal
//
//  Created by moule on 2022/3/11.
//
/*信号是由操作系统传给进程的中断，会提早终止一个程序。在 UNIX、LINUX、Mac OS X 或 Windows 系统上，可以通过按 Ctrl+C 产生中断。
 
 有些信号不能被程序捕获，但是下表所列信号可以在程序中捕获，并可以基于信号采取适当的动作。这些信号是定义在 C++ 头文件 <csignal> 中。
 
 信号    描述
 SIGABRT    程序的异常终止，如调用 abort。
 SIGFPE    错误的算术运算，比如除以零或导致溢出的操作。
 SIGILL    检测非法指令。
 SIGINT    接收到交互注意信号。
 SIGSEGV    非法访问内存。
 SIGTERM    发送到程序的终止请求
*/


#include <iostream>
#include <csignal>

using namespace std;

void signalHandler( int signum )
{
    cout << "Interrupt signal (" << signum << ") received.\n";
    
    // 清理并关闭
    // 终止程序
    
    exit(signum);
    
}

int main ()
{
    int i = 0;
    // 注册信号 SIGINT 和信号处理程序
    signal(SIGINT, signalHandler);
    
    while(++i){
        cout << "Going to sleep...." << endl;
        if( i == 3 ){
            raise( SIGINT);
        }
        sleep(1);
    }
    
    return 0;
}
