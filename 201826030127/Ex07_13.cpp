#include<iostream>
#include<iomanip>
#include<array>
using namespace std;


int main()
{
    int integers,flag=1,i,j;

    const size_t arraysize = 20;

    array <int ,arraysize>s;//array s has 20 elements
    for(size_t i=0;i<=s.size();i++)
        s[i]=0;

    for(size_t i = 0;i <= s.size()-1;i++)
    {
        cin >>integers ;

        if(integers>=10&&integers<=100)
        {
            for(size_t j=0;j<i;j++)
            {
                if(i==0)
                {
                s[0]=integers;
                break;
                }
                if(integers==s[j])
                {
                   flag=0;
                }

            }
            if(flag!=0)
                s[i]=integers;
        }
        flag=1;
    }
    for(i=0;i<=s.size()-1;i++)
   {
    if(s[i]!=0)
        cout<<s[i]<<' ';
   }

}
