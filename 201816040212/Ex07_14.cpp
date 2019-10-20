#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    //创建
vector<int> yyy;
while(!yyy.empty())
    yyy.clear();

    //输入
int o;
vector<int>::iterator it;
for(int i=0;i<2;i++){
    cin>>o;
    //查重
    it = find(yyy.begin(), yyy.end(), o);
    if(10<=o<=100 && it == yyy.end()){
            //插入
        yyy.push_back(o);
    }else{
        //否则跳过
        cout<<"重复或超出范围"<<endl;
        i--;
        continue;
    }
}

//输出
for(int item:yyy)
    cout<<item<<" ";
cout<<endl;
}
