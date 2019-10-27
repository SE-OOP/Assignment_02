
#include<iostream>
#include<vector>
using namespace std;
int main()
{
       vector<int> a;
       int num,n=0,i,j;
       for(i=0;i!=20;++i)
       {
           cin>>num;//输入num
       //判断数的有效性
       if(num<10||num>100)
       {
           cout<<"该数无效"<<endl;
           continue;
       }
        //判断输进来的数是否已经存在
       for(j=0;j!=n;++j)
       {
       if(a[j]==num)//存在就跳出循环
       {
           break;
       }
       }
       if (j==n)
       {
           a.push_back(num);
           //a[n]=num;//总共有n个不重复的数
           n++;
       }
       }
       //输出结果
       for(i=0;i!=n;++i)
       {
           cout<<a[i]<<" ";
       }
       return 0;
}
