#include <iostream>
#include <vector>
using std::cout;
using std::cin;


using namespace std;

int main()
{
    vector<int>date;//定义数组date
    int x;
    for(int i=0;i<20;i++)
    {
        cin>>x;
        date.push_back(x);//输入数据
    }
    for(int i=0;i<20;i++)
    {
        for(int j=i+1;j<20;j++)
        {
            if(date[i]==date[j])
                date[j]=0;//将重复数据定义为0
        }
    }
    for(int i=0;i<20;i++)
    {
        if(date[i]!=0&&date[i]>=10&&date[i]<=100)
            cout<<date[i]<<" ";
    }
    return 0;
}
