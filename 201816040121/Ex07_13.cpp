#include <iostream>
#include <array>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int flag;//数据暂存对象flag
    array< int, 20 >numbers={};//定义并初始化array：20个0
    for (size_t i = 0; i < 20; ++i)
    {
        cin >> flag;
        sort(numbers.begin(), numbers.end());//循环排序array，保证binary_search能运行
        if(!binary_search(numbers.begin(), numbers.end(), flag))//如果array中没有输入的数据flag
        {
            numbers[0] = flag;//总是把新数据放在首元素，因为sort方法会把大数排在后面
        }
    }
    for (int number : numbers )
    {
       if(number !=0 )
       {
           cout << number << " ";//如果数据不为0，输出
       }
    }
}//end main
