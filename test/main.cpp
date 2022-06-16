#include <iostream>
#include<cstdio>
using namespace std;
#define MAXLEN 100
struct DataType
{
    int no;
    char name[20];
    int sc;
}Data;
typedef struct
{
    DataType data[MAXLEN];
    int Length;
}SeqList;


void InList(SeqList *L)
{
    L->Length = 0;
}
void CreatList(SeqList *L, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("请输入第%d个学生学号:\n", i+1);
        cin >> L->data[i].no;
        printf("请输入第%d个学生姓名:\n", i+1);
        cin >> L->data[i].name;
      
        printf("请输入第%d个学生成绩:\n", i+1);
        cin >> L->data[i].sc;
    }
    L->Length = i;
}
int GetLength(SeqList *L)
{

    return L->Length;
}
int  JudgeLength(SeqList *L)
{
    if (L->Length == 0)
        return 1;
    else
        return -1;
}
int DispList(SeqList *L)
{
    int i;
    for (i = 0; i < L->Length; i++)
        printf("学号：%5d\t姓名：%s\t分数%5d:\t \n",L->data[i].no,L->data[i].name,L->data[i].sc);
    return 0;
}


int main()
{
    SeqList L;
    int i, k, n,x,sum;
    char ch;
    do
    {    printf("\n 1创建顺序表");
        printf("\n 2获取线性表长度");
        printf("\n3获取线性表元素");
        printf("\n====================================");
        printf("|\n请输入你的选择（1，2，3）");
        cin >> k;
        InList(&L);
        switch (k)
        {
            case 1:
                
                
                printf("请输入建立线性表个数:");
                cin >> n;
                CreatList(&L, n);
                printf("建立的线性表为:\n");
                DispList(&L);
                break;
                
                
            case 2:
            {
                int i;
                i = (GetLength(&L));
                printf("顺序表长度为:%d\n", i);
            }
                break;
            case 3:
            {
                
                printf("%d",JudgeLength(&L));
            }
        }
    } while (k != 3);
    printf("\n再见!");
    printf("\n");
    ch = getchar();
}
