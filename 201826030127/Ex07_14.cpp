#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;



int main()
{
    int integers,i,j,k,flag=1;

    vector<int>s(0);
    for(j=1; ;j++)
    {
        cin>>integers;
        if(integers>=10&&integers<=100)
            break;
    }
        if(integers>=10&&integers<=100)
              {
                  s.push_back(integers);
                  cout<<s[0]<<" ";
                for(i=1;i<=20-j;i++)
                {
                    cin>>integers;
                    if(integers>=10&&integers<=100)
                    {
                    for(k=0;k<s.size();k++)
                    {
                        if(integers==s[k])
                        flag=0;
                    }
                    if(flag==1)
                    {
                    s.push_back(integers);
                    cout<<s[s.size()-1]<<" ";
                    }
                    flag=1;
                    }
                }

              }

}
