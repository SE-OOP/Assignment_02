#include <iostream>
#include <vector>
#include <stdexcept>
#include <algorithm>
using namespace std;
void inputVector(vector <int>&);//输入函数
void outputVector(const vector<int>&);//输出函数
int main()
{
    vector<int>numbers;//定义并初始化一个空vector
    inputVector(numbers);
    outputVector(numbers);
}
void inputVector(vector<int>&items)//输入函数
{
    int flag;//数据暂存于flag
    for(int i=0; i<20;++i)
    {
        cin >> flag;
        vector<int>::iterator it = find(items.begin(), items.end(), flag);//用find方法查重
        if(it!= items.end())
        {
            it=items.erase(it);//如果有重复值则删去
            items.push_back(flag);//并在末尾添加新元素
        }
        else
        {
            items.push_back(flag);//如果没有重复值则直接在末尾添加新元素
        }
    }
}
void outputVector(const vector<int>&items)//输出函数
{
    for(int item : items)//基于范围的for语句
    {
        cout << item <<" ";//直接输出所有内容
    }
}
