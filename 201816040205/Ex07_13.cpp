#include <iostream>
#include <array>
using namespace std;

int main()
{
  int n, i, t, flag;

  array<int,20> c={};//c ia an array with 20 int values

  for(i=0;i<20;i++)//input 20 values
  {
      flag=0;
     cin>>n;
    for(t=0;t<=i;t++)
    {
        if(n==c[t])
        {
             flag++;
             break;
        }

    }
    if(n>=10&&n<=100&&flag==0)//save the value which is between 10 and 100 and different with others
    c[i]=n;

  }

  for(i=0;i<20;i++)
  {
      if(c[i]!=0)
      cout<<c[i]<<" ";
  }

return 0;
}
.
