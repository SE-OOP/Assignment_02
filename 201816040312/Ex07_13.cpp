#include <iostream>
#include<iomanip>
#include<array>
using namespace std;

int main()
{
 array<int,20> a;//创建数组
 cout<<"请输入数组的值：";
 int i;

 for(i=0;i<20;++i)//初始化数组
 {
     cin>>a[i];
     int j;
    for(j=0;j<i;++j)
    {
        if(a[i]==a[j])
            a[i]=0;
    }
 }
 for(i=0;i<20;++i)//输出数组内容
 {
     if(a[i]==0)
        continue;
     else
        cout<<setw(5)<<a[i];
 }
}
