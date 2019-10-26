//Ex07_13.cpp
#include <iostream>
#include <array>
#include <cstddef>
#include <algorithm>

using namespace std;


int main()
{
    array < int, 20 > n = {} ;//定义array，并初始化为0;

     int i = 0, j = 0 , x ,count=0 ;
     cout << "请输入20个数字" << endl;
    while (i<20)
    {
        cin >> x ;//输入x的值;

        for ( j = 0 ; j <= i ; j++ )
        {
            if(x == n[j] || x < 10 || x > 100)//判断是否合法;
            {
                count=1;
                break;
            }
        }
        if(count==1)
        {
            n[i]=0;
            i++;
        }

        else
        {
           n[i]  = x ;
           i++ ;
        }
        count = 0;
    }

    cout <<"array的元素为：" ;

    for (size_t i = 0 ;i < n.size() ; i++)//输出array的元素;
    {
        if(n[i]!=0)
        cout << n[i] <<' ' ;
    }

    return 0;
}
