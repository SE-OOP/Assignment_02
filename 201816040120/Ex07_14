#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main()
{
    vector < int > n(1);
    int x,i=0,j=0,count=0 ;
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
            /*n.push_back(0);
            i++;*/
            continue;
        }

        else
        {
           n.push_back(x) ;
           i++ ;
        }
        count = 0;
    }

    for(size_t i=0 ; i < n.size(); i++)//循环输出;
    {
        //if(n.at(i) != 0)
        cout << n.at(i) << " " ;
    }
    return 0;
}
